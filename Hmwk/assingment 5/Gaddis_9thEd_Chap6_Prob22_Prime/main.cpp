/* 
 * File:    main.cpp
 * Author:  Isaac Martinez
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isPrime(int n);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int n;
    //Initialize Variables
    cout << "Enter a number:\n";
    cin >> n;
    //Process or map Inputs to Outputs
    if(isPrime(n)){
        cout << n << " is a prime number.";
    }
    else{
        cout << n << " is not a prime number.";
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}

bool isPrime(int n){
    bool isPrime = true;
    for(int i=2; i<n && isPrime; i++){
        if(n%i==0){
            isPrime=!isPrime;
        }
    }
    return isPrime;
}