/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int x;
    //Initialize Variables
    cout << "Enter how many books you purchased this month:" << endl;
    cin >> x;
    
    //Process or map Inputs to Outputs
    switch ( x ) {                  //takes input and checks cases available then outputs match.
        case 0 :
            cout << "You earned 0 points.";
            break;
        case 1 :
            cout << "You earned 5 points.";
            break;
        case 2 :
            cout << "You earned 15 points.";
            break;
        case 3 :
            cout << "You earned 30 points.";
            break;
        default :
            cout << "You earned 60 points.";
            break;
        
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}