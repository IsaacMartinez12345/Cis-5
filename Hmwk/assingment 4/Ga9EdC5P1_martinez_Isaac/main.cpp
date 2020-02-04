/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2020, 12:15 PM
 * Purpose:  Truth Table
 */

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
    int num;    //number the users enters 
    int total= 0; //Accumulator //Initialize the Accumulator to 0
    
    cout<< "Enter a positive integer value:";
    cin >> num;
    
   
    while (num < 0)
    {
        cout << "Please enter a positive non-zero number."
        << endl;
        cin >> num;
    }
    //Process or map Inputs to Outputs
    for (int count = 1 ; count <=num;count++)
    total+=count;
    
    //Display Outputs
    cout << "\nThe sum of all the integers from 1 to "
     << num << " is " << total;
    //Exit stage right!
    return 0;
}