#include <iostream>

using namespace std;

int main()
{
    //Initialize two variables for user input
    int a;
    int b;

    //Allow user to input two numbers between 0-100
    cout << "Enter two numbers between 0-100: ";
    cin >> a;
    cin >> b;

    //If user enters invalid numbers, end program
    if(a < 0 || b < 0 || a > 100 || b > 100){
        cout << "Invalid Numbers!";
        return 0;
    }

    //Initialize dummy variables for end
    int c = a;
    int d = b;

    //Initialize variables corresponding to ternary digits
    int aterfive = 0;
    int aterfour = 0;
    int aterthree = 0;
    int atertwo = 0;
    int aterone = 0;

    //Convert first number to ternary
    while (a >= 81){
        aterfive = aterfive + 1;
        a = a - 81;
    }
    while (a >= 27){
        aterfour = aterfour + 1;
        a = a - 27;
    }
    while (a >= 9){
        aterthree = aterthree + 1;
        a = a - 9;
    }
    while (a >= 3){
        atertwo = atertwo + 1;
        a = a - 3;
    }
    while (a >= 1){
        aterone = aterone + 1;
        a = a - 1;
    }

    //Initialize variables corresponding to ternary digits
    int bterfive = 0;
    int bterfour = 0;
    int bterthree = 0;
    int btertwo = 0;
    int bterone = 0;

    //Convert second number to ternary
    while (b >= 81){
        bterfive = bterfive + 1;
        b = b - 81;
    }
    while (b >= 27){
        bterfour = bterfour + 1;
        b = b - 27;
    }
    while (b >= 9){
        bterthree = bterthree + 1;
        b = b - 9;
    }
    while (b >= 3){
        btertwo = btertwo + 1;
        b = b - 3;
    }
    while (b >= 1){
        bterone = bterone + 1;
        b = b - 1;
    }

    //Initialize difference variable
    int diff = 0;

    //Calculate hamming distance
    if (aterfive != bterfive)
        diff = diff + 1;
    if (aterfour != bterfour)
        diff = diff + 1;
    if (aterthree != bterthree)
        diff = diff + 1;
    if (atertwo != btertwo)
        diff = diff + 1;
    if (aterone != bterone)
        diff = diff + 1;

    cout << "Hamming distance between " << c << " and " << d << " when numbers are in ternary format is " << diff;

    return 0;
}
