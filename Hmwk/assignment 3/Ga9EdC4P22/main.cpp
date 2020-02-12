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
    float userTemp, ethFP, ethBP, mercFP, mercBP, oxyFP, oxyBP,
        waterFP, waterBP;
    char b[] = " will boil";
    char f[] = " will freeze";
    ethBP = 172;
    ethFP = -173;
    mercBP = 676;
    mercFP = -38;
    oxyBP = -306;
    oxyFP = -362;
    waterBP = 212;
    waterFP = 32;
    //Initialize Variables
    cout << "Enter a temperature:" << endl;
    cin >> userTemp;
    //Process or map Inputs to Outputs
    
    //Freezing Point
    if ( userTemp <= ethFP ) {
    cout << "Ethyl alcohol" << f << endl;
    }
    if ( userTemp <= mercFP ) {
    cout << "Mercury" << f << endl;
    }
    if ( userTemp <= oxyFP ) {
        cout << "Oxygen" << f << endl;
    }
    if ( userTemp <= waterFP ) {
    cout << "Water" << f << endl;
    }
    
    //Boiling
    if ( userTemp >= ethBP ) {
    cout << "Ethyl alcohol" << b << endl;
    }
    if ( userTemp >= mercBP ) {
    cout << "Mercury" << b << endl;
    }
    if ( userTemp >= oxyBP ) {
        cout << "Oxygen" << b << endl;
    }
    if ( userTemp >= waterBP ) {
    cout << "Water" << b << endl;
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}