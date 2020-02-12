/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
//System Libraries
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
const float gPerLb = 453.592;//Grams/lb
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float mSwUsed, mMass, hMassLb,
            cMass, gSwPerC;
    int nCans;
    //Initialize or input data here
    mMass = 35;//35 grams
    mSwUsed = 5;//5 grams
    gSwPerC = 1e-3f;//.001 Concentration
    cMass = 350;//350 grams
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> hMassLb;
    
    nCans = ((hMassLb*gPerLb)*(mSwUsed/mMass))/(cMass*gSwPerC);
    //Format and display outputs here
    cout << "The maximum number of soda pop cans\n" << "which can be consumed is " << nCans << " cans";
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}