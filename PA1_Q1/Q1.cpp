#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Initialize variables for user inputs
    double a_xcenter;
    double a_ycenter;
    double a_area;
    double b_xcenter;
    double b_ycenter;
    double b_area;

    //User inputs information for first square (square a)
    cout << "Enter the information for the first square\n";
    cout << "x-coordinate: ";
    cin >> a_xcenter;
    cout << "y-coordinate: ";
    cin >> a_ycenter;
    cout << "area: ";
    cin >> a_area;

    //User inputs information for second square (square b)
    cout << "Enter the information for the second square\n";
    cout << "x-coordinate: ";
    cin >> b_xcenter;
    cout << "y-coordinate: ";
    cin >> b_ycenter;
    cout << "area: ";
    cin >> b_area;

    //Initialize variables for square a measurements
    double a_maxx;
    double a_minx;
    double a_maxy;
    double a_miny;

    //Input information for square a
    a_maxx = a_xcenter + (sqrt(a_area))/2; //Maximum x-coordinate for square a
    a_minx = a_xcenter - (sqrt(a_area))/2; //Minimum x-coordinate for square a
    a_maxy = a_ycenter + (sqrt(a_area))/2; //Maximum y-coordinate for square a
    a_miny = a_ycenter - (sqrt(a_area))/2; //Minimum y-coordinate for square a

    //Initialize variables for square b measurements
    double b_maxx;
    double b_minx;
    double b_maxy;
    double b_miny;

    //Input information for square b
    b_maxx = b_xcenter + (sqrt(b_area)/2); //Maximum x-coordinate for square b
    b_minx = b_xcenter - (sqrt(b_area)/2); //Minimum x-coordinate for square b
    b_maxy = b_ycenter + (sqrt(b_area)/2); //Maximum y-coordinate for square b
    b_miny = b_ycenter - (sqrt(b_area)/2); //Minimum y-coordinate for square b

    //If the squares have the same center, the squares intersect
    if (a_xcenter == b_xcenter && a_ycenter == b_ycenter){
        cout << "THE SQUARES INTERSECT";
    }
    //Test if squares intersect by seeing if x or y coordinates overlap
    else if (a_xcenter > b_xcenter){
        if (a_minx < b_maxx){
            if (a_maxy > b_miny || a_miny < b_maxy)
                cout << "THE SQUARES INTERSECT";
            else
                cout << "THE SQUARES DO NOT INTERSECT";
        }
        else cout << "THE SQUARES DO NOT INTERSECT";
    }
    else if (a_xcenter < b_xcenter){
        if (a_maxx > b_minx){
            if (a_maxy > b_miny || a_miny < b_maxy)
                cout << "THE SQUARES INTERSECT";
            else
                cout << "THE SQUARES DO NOT INTERSECT";
        }
        else
            cout << "THE SQUARES DO NOT INTERSECT";
    }
    else if (a_ycenter > b_ycenter){
        if (a_miny < b_maxy){
            if (a_maxx > b_minx || a_minx < b_maxx)
                cout << "THE SQUARES INTERSECT";
            else
                cout << "THE SQUARES DO NOT INTERSECT";
        }
        else
        cout << "THE SQUARES DO NOT INTERSECT";
    }
    else if (a_ycenter < b_ycenter){
        if (a_maxy > b_miny){
            if (a_maxx > b_minx || a_minx < b_maxx)
                cout << "THE SQUARES INTERSECT";
            else
                cout << "THE SQUARES DO NOT INTERSECT";
        }
        else
            cout << "THE SQUARES DO NOT INTERSECT";
    }
    //If one square is inside the other, the squares intersect
    else if (a_maxy >= b_maxy && a_maxx >= b_maxx && a_minx <= b_minx && a_miny <= b_miny)
        cout << "THE SQUARES INTERSECT";
    else if (b_maxy >= a_maxy && b_maxx >= a_maxx && b_minx <= a_minx && b_miny <= a_miny)
        cout << "THE SQUARES INTERSECT";
    //Otherwise the squares do not intersect
    else
        cout << "THE SQUARES DO NOT INTERSECT";

    return 0;
}
