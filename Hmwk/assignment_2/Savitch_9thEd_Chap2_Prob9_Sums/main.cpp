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
    float x;//input variable
    float sumTot, sumN, sumP;//Sums
        
    //Initialize or input i.e. set variable values
    sumTot=sumN=sumP=0;
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    //int 1
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 2
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 3
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 4
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 5
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 6
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 7
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 8
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 9
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    //int 10
    cin>>x;
    if(x>0)
        {
          sumP+=x;  
        }
    else
        {
          sumN+=x;  
        }
    
    sumTot=sumP+sumN;//get total sum
    
    //Display the outputs
    
    cout<<"Negative sum ="<<std::setw(4)<<sumN<<endl;
    cout<<"Positive sum ="<<std::setw(4)<<sumP<<endl;
    cout<<"Total sum    ="<<std::setw(4)<<sumTot;
    
    //Exit stage right or left!
    return 0;
}