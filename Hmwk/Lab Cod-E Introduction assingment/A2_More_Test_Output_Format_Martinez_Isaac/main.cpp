/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>   //I/O libary
#include <iomanip>    //Format Libary
using namespace std;  //Namespace of Libaries       

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
    float a,b,c,d;
    //Initialize or input data here
    cin>>a>>b>>c>>d;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout<<fixed;
    
cout<<setw(9)<<setprecision(0)<<a<<setw(10)<<setprecision(1)<<a<<setprecision(2)<<setw(10)<<a<<endl;
    
    cout<<setw(9)<<setprecision(0)<<b<<setw(10)<<setprecision(1)<<b<<setprecision(2)<<setw(10)<<b<<endl;
   
    cout<<setw(9)<<setprecision(0)<<c<<setw(10)<<setprecision(1)<<c<<setprecision(2)<<setw(10)<<c<<endl;
    
    cout<<setw(9)<<setprecision(0)<<d<<setw(10)<<setprecision(1)<<d<<setprecision(2)<<setw(10)<<d;

    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}