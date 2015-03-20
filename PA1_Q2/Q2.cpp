#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //initialize variables for inputs
    double og_bill;
    double tax_rate;
    int tip_level;
    int post;

    //User enters information
    cout << "Enter the original bill amount: ";
    cin >> og_bill;
    cout << "Enter the tax rate %: ";
    cin >> tax_rate;
    cout << "Enter tip level (1=15%, 2=20%, 3=25%): ";
    cin >> tip_level;

    //If tip level input is invalid, keep prompting user
    while (tip_level > 3 || tip_level < 1){
        cout << "Invalid Input. Please try again\n";
        cout << "Enter tip level (1=15%, 2=20%, 3=25%): ";
        cin >> tip_level;
    };

    cout << "Tip on post-tax amount? (1=yes, 2=no) ";
    cin >> post;

    //If response is invalid, keep prompting user
    while (post > 2 || post < 1){
        cout << "Invalid Input. Please try again\n";
        cout << "Tip on post-tax amount? (1=yes, 2=no) ";
        cin >> post;
    };

    //Fix displays to two decimal places
    std::cout << std::setprecision(2) << std::fixed;

    //Calculate bill with tax
    double pre_bill = og_bill + (og_bill * (tax_rate/100));
    std::cout << "The total bill pre-tip is: $" << pre_bill << "\n";

    //If tip is on post tax amount, calculate and display
    if (post==1){
        if (tip_level==1){
            std::cout << "The total tip is: $" << pre_bill * 0.15 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (pre_bill * 0.15);
        }
        else if (tip_level==2){
            std::cout << "The total tip is: $" << pre_bill * 0.20 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (pre_bill * 0.20);
        }
        else {
            std::cout << "The total tip is: $" << pre_bill + 0.25 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (pre_bill * 0.25);
        }
    }
    //If tip is on pre tax amount, calculate and display
    else {
        if (tip_level==1){
            std::cout << "The total tip is: $" << og_bill * 0.15 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (og_bill * 0.15);
        }
        else if (tip_level==2){
            std::cout << "The total tip is: $" << og_bill * 0.20 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (og_bill * 0.20);
        }
        else {
            std::cout << "The total tip is: $" << og_bill * 0.25 << "\n";
            std::cout << "The total bill post-tip is: $" << pre_bill + (og_bill * 0.25);
        }
    }

    return 0;
}
