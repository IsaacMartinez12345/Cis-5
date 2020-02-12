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
    const int INCREMENT = 5; //Minute increment
    float calBurned, calBPM;
    
    //Initialize Variables
    cout << "Enter how many calories are burned per minute:" << endl;
    cin >> calBurned;
    
    cout << "Min\tCalories burned" << endl;
    //Process or map Inputs to Outputs
    
    //starting at 5 while i <= 30, calculate calBPM. print i and calBPM
    //then increment by 5 until i = 30
    for ( int i = 5; i <= 30; i+= INCREMENT)
    {
        calBPM = calBurned * i;
        cout << i << "\t" << setprecision(1) << fixed << calBPM << endl;
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}