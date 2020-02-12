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
    double f ;
    float c;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>f;
    
    c = (f-32)*5/9;

    //Display the outputs
    std::cout<<std::setprecision(4);
    std::cout<<std::showpoint<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}