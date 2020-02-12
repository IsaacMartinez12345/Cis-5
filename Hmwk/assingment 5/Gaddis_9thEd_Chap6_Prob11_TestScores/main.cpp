/* 
 * File:    main.cpp
 * Author:  Isaac Martinez
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float kineticEnergy(float mass, float velocity);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float KE, m, v;
    //Initialize Variables
    cout << "Enter the object's mass:" <<endl;
    cin >> m;
    cout << "Enter the object's velocity:" <<endl;
    cin >> v;
    //Process or map Inputs to Outputs
    KE = kineticEnergy(m, v);
    //Display Outputs
    cout << setprecision(1) << fixed;
    cout << "The object has " << KE << " Joules of energy.";
    //Exit stage right!
    return 0;
}

float kineticEnergy(float mass, float velocity)
{
    float result;
    
    result = .5 * (mass * (velocity * velocity));
}