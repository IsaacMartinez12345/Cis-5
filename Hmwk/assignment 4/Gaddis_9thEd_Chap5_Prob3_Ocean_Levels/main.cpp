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
    float oceanRise, x;
    //Initialize Variables
    cout << "Enter how many millimeters the ocean is rising per year:" << endl;
    cin >> x;
    
    oceanRise = x;
    
    cout << "Year\tRise(mm)" << endl;
    //Process or map Inputs to Outputs
    for ( int i = 1; i <= 30; i++)
    {
        cout << i << "\t" << setprecision(1) << fixed << oceanRise << endl;
        oceanRise = oceanRise + x;
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}