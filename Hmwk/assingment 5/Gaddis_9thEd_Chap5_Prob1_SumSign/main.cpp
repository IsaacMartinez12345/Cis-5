/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: isaac
 *
 * Created on February 11, 2020, 8:07 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int num, sum;
    //Initialize Variables
    
    //set num and sum to 0
    num = 0;
    sum = 0;
    
    //Take user input
    cout << "Enter a positive integer value:" << endl;
    cin >> num;
    
    //input validation of positive int
    while ( num < 0 ) 
    {
        clog << "Invalid Entry: Please enter a positive integer." << endl;
        cin >> num;
    }
    
    //Process or map Inputs to Outputs
    
    //for loop starting at 1 checking if i is <= to num
    //then iterate until the function is true
    for ( int i = 1; i <= num; i++)
    {
        sum +=i;    //sum = sum + i
    }
    //Display Outputs
    cout << "The sum of all the integers from 1 to " << num << " is " << sum;
    //Exit stage right!
    return 0;
}