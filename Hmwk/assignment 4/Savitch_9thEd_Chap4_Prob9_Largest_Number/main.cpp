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

#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float dollar = 1.00;
const float quarter = 0.25;
const float dime = 0.10;
const float nickel = 0.05;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float DFT = 3.50;
    int moneyIn;
    float runningTotal = 0;
    float change = 0;
    //Initialize or input i.e. set variable values
    
    do
    {
        cout << "List of coins:" << endl;
        cout << "1. Nickel" << endl;
        cout << "2. Dime" << endl;
        cout << "3. Quarter" << endl;
        cout << "4. Dollar" << endl;
        cout << "Enter number for coin:" << endl;
        cout <<  endl;
        cin >> moneyIn;
        
        switch(moneyIn)
        {
            case 1:
                runningTotal += nickel;
                break;
            case 2:
                runningTotal += dime;
                break;
            case 3:
                runningTotal += quarter;
                break;
            case 4:
                runningTotal += dollar;
                break;
            default:
                break;
        }
        
        cout << "Current amount: $" << setprecision(2) << fixed << runningTotal << endl;
    }while(!(runningTotal >= DFT));
    
    cout << "Enjoy your deep-fried twinkie" << endl;
    cout << "Change to be returned: $" << setprecision(2) << fixed << runningTotal-DFT << endl;

    //Exit stage right or left!
    return 0;
}