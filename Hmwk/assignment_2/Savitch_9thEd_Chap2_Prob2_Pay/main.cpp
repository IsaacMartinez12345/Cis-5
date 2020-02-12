/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
//System Libraries
#include <iostream> // std::cout, std::fixed,
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float percInc, monInc, percCon, oAnuSal, oMonSal, nAunSal, nMonSal, retPay, monthCon, biAnCon;
    
    percCon=100;
    //Initialize or input data here
    percInc=7.6;
    monthCon=12;
    biAnCon=6;
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout<<"Input previous annual salary."<<endl;
    cin>>oAnuSal;
    
    oMonSal=(oAnuSal/monthCon);
    monInc=oMonSal*(percInc/percCon);
    retPay=oMonSal*(percInc/percCon)*biAnCon;
    nMonSal=oMonSal+monInc;
    nAunSal=nMonSal*monthCon;

    //Format and display outputs here
    std::cout<<std::fixed;
    std::cout<<"Retroactive pay    = $"<<std::setprecision(2)<<std::setw(7)<<retPay<<endl;
    std::cout<<"New annual salary  = $"<<std::setprecision(2)<<std::setw(7)<<nAunSal<<endl;
    std::cout<<"New monthly salary = $"<<std::setprecision(2)<<std::setw(7)<<nMonSal;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}