/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: isaac
 *
 * Created on February 11, 2020, 8:07 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float d, s, t;  //distance, speed, time
    //Initialize Variables
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> s;
    
    while ( s < 0 )
    {
        clog << "Invalid Entry: Please enter a positive number." << endl;
        cin >> s;
    }
    
    cout << "How many hours has it traveled?" << endl;
    cin >> t;
    
    while ( t < 0 )
    {
        clog << "Invalid Entry: Please enter a positive number." << endl;
        cin >> t;
    }
    
    cout << "Hour" << setw(20) << "Distance Traveled" << endl;
    
    //Process or map Inputs to Outputs
    for ( int i = 1; i <= t; i++)
    {
        d = s * i;
        cout << i << setw(15) << d << endl;
    }
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}