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

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float a, b, c, twoLarge, threeLarge;
    //Initialize or input i.e. set variable values
    std::cout << setprecision(1) << fixed;
    
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << endl;
    
    cout << "Enter Second number:" << endl;
    cin >> b;
    cout << endl;
    
    cout << "Enter third number:" << endl;
    cin >> c;
    cout << endl;
    
    if ( a > b) // a > b function
    {
        cout << "Largest number from two parameter function:" << endl;
        cout << a << endl;
        cout << endl;
        
        if ( a > c ) 
        {
            cout << "Largest number from three parameter function:" << endl;
            cout << a << endl;
        }
        else
        {
            cout << "Largest number from three parameter function:" << endl;
            cout << c << endl;
        }
    }
    
    if ( a < b ) //a < b
    {
        cout << "Largest number from two parameter function:" << endl;
        cout << b << endl;
        cout << endl;
        
        if ( b > c ) 
        {
            cout << "Largest number from three parameter function:" << endl;
            cout << b << endl;
        }
        else
        {
            cout << "Largest number from three parameter function:" << endl;
            cout << c << endl;
        }
    }
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}