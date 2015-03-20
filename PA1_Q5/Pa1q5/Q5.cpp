#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //Initialize variable for user input
    int a;

    //Allow user to choose rock paper scissors
    cout << "Choose Rock (0), Paper(1), or Scissors(2): ";
    cin >> a;

    //If input is invalid, prompt user again
    while (a > 2 || a < 0){
        cout << "Invalid input.\n";
        cout << "Choose Rock (0), Paper(1), or Scissors(2): ";
        cin >> a;
    }

    //Set seed and generate random number
    srand(time(NULL));
    int b = rand() % 3;

    //Display options if computer chooses rock
    if (b==0){
        cout << "Computer chooses: Rock\n";
        if (a==0)
            cout << "You tie!";
        if (a==1)
            cout << "You win!";
        if (a==2)
            cout << "You lose!";
    }
    //Display options if computer chooses paper
    else if (b==1){
        cout << "Computer chooses: Paper\n";
        if (a==0)
            cout << "You lose!";
        if (a==1)
            cout << "You tie!";
        if (a==2)
            cout << "You win!";
    }
    //Display options if computer chooses scissors
    else {
        cout << "Computer chooses: Scissors\n";
        if (a==0)
            cout << "You win!";
        if (a==1)
            cout << "You lose!";
        if (a==2)
            cout << "You tie!";
    }

    return 0;
}
