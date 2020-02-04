/* 
 * File:   main.cpp
 *
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float x, avg;
    //Initialize or input i.e. set variable values
    x=0;
    avg=0;
    
    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>x;
    avg+=x;
    
   
    cin>>x;
    avg+=x;
    
   
    cin>>x;
    avg+=x;
    
    
    cin>>x;
    avg+=x;
    
   
    cin>>x;
    avg+=x;
    
    
    //Display the outputs
cout<<fixed<<setprecision(1)<<showpoint;
cout<<"The average = "<<avg/5;
    //Exit stage right or left!
    return 0;
}