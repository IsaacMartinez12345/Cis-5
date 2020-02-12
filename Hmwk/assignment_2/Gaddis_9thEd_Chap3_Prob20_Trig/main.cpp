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
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
#define PI 3.14159265
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle, sinResult, cosResult, tanResult, cnv;
    
    cnv=PI/180;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    sinResult=sin(angle*cnv);
    cosResult=cos(angle*cnv);
    tanResult=tan(angle*cnv);
    
    //Display the outputs
    std::cout<<std::fixed;
    std::cout<<std::setprecision(0)<<"sin("<<angle<<") = "<<std::setprecision(4)<<sinResult<<endl;
    std::cout<<std::setprecision(0)<<"cos("<<angle<<") = "<<std::setprecision(4)<<cosResult<<endl;
    std::cout<<std::setprecision(0)<<"tan("<<angle<<") = "<<std::setprecision(4)<<tanResult;
    
    //Exit stage right or left!
    return 0;
}