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
    float x, y;
    //Initialize Variables
    cout << "Enter a number:" << endl;
    cin >> x;
    
    cout << "Enter a number:" << endl;
    cin >> y;
    
    if(x>y)
        {
            cout << x << " is larger";
        }
    else
        {
            cout << y << " is larger";
        }
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}