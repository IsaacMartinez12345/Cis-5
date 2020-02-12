/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float rCap, ppl, x;
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>rCap;
    cin>>ppl;
    
    if(ppl<=rCap)
    {
        x=rCap-ppl;
        cout<<"Meeting can be held."<<endl;
        printf ("Increase number of people by %.0f will be allowed without violation.\n", x);
    }
    if(ppl>rCap)
    {
        x=ppl-rCap;
        cout<<"Meeting cannot be held."<<endl;
        printf ("Reduce number of people by %.0f to avoid fire violation.\n", x);
    }
        
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}