/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
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
    const int CNVPERC=100;//Conversion to Percentage
    float fedBdgt,milBdgt,mlPrcnt;//Budgets In Dollars 2020
   
    
    
   milBdgt=7.0e11f;    //Military Budget = 700 Billion   
   fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    //7 characters or less
    
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
   cout<<"Federal Budget  =$"<<fedBdgt<<endl;
   cout<<"Military Budget =$"<<milBdgt<<endl;
   cout<<"Military Budget =$"<<milBdgt/fedBdgt*CNVPERC<<"%"<<endl;
   
  
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}