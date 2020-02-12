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
    float callStart, rateA, rateB, rateC, charges;
    int callMin;
    char errstr[] = "Invalid entry, Reenter:";
    //Initialize Variables
    
    rateA = 0.05;
    rateB = 0.45;
    rateC = 0.20;
    
    
    cout << "Enter the starting time:" << endl;
    cin >> callStart;
    
    //Input validation no larger than 23:59
    while ( callStart > 23.59 ) {
        cout << errstr << endl;
        cin >> callStart;
    }
    
    //Input validation no larger than 0.59
    while ( callStart-static_cast<int>(callStart) > 0.59 ) {
        cout << errstr << endl;
        cin >> callStart;
    }
    
    cout << "Enter the number of minutes of the call:" << endl;
    cin >> callMin;
    
    if (callStart < 06.59) {
        charges = callMin * rateA;
        
        printf ("The charges are $%.2f", charges);
    }
    
    if (callStart > 07.00 && callStart < 19.00) {
        charges = callMin * rateB;
        
        printf ("The charges are $%.2f", charges);
    }
    
    if (callStart > 19.01 && callStart < 23.59) {
        charges = callMin * rateC;
        
        printf ("The charges are $%.2f", charges);
    }
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}