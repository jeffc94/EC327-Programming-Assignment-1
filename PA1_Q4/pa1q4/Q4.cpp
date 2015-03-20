#include <iostream>

using namespace std;

int main()
{
    //Initialize variables
    char a;
    int b;
    int c;
    char d;

    //Allow user to make inputs
    cout << "Enter character: ";
    cin >> a;
    cout << "Offset (enter 0 to change case): ";
    cin >> b;

    //See if offset is out of range
    c = a;
    if (c + b > 127){
        cout << "Error. Out of range.";
        return 0;
    }

    //If offset is 0, change case if character is letter.
    //Otherwise there is no change
    if (b==0){
        if (c>64 && c<91){
            b = 32;
            d = c + b;
            cout << d;
        }
        else if (c>96 && c<123){
            b = -32;
            d = c + b;
            cout << d;
        }
        else
            cout << a;
    }
    //If offset is not 0, make regular offset
    else {
        d = b + c;
        cout << "New character: " <<d;
    }
    return 0;
}
