/* 
 * File:main.cpp   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed

    //Declare Variable Data Types and Constants
    int SIZE = 5;
    string salsa[] = {"mild", "medium", "sweet", "hot", "zesty"};
    float sales[SIZE];
    float total = 0;
    int temp;
    //Initialize Variables
    cout << fixed << setprecision(2);

    for (int count=0; count < SIZE; count++){
        cout << "Enter the sales of " << salsa[count] << " salsa:$" << endl;
        
        
        
        cin >> sales[count];
    }
    cout << setw(9) << left << "Type" << "Sales" << endl;
    
    
    
    for (int count=0; count < SIZE; count++){
        cout << setw(9) << left << salsa[count] << setw(0) << "$" << sales[count] << endl;
        total += sales[count];
    }

    cout << "Total Sales was $" << total << endl;
    
    

    int kindof2 = 0;
    int kindof1 = 0;
    float lowest = sales[0];
    float highest = sales[0];

    for (int count=1; count < SIZE; count++){
        temp = sales[count];
        if (temp < lowest){
            lowest = temp;
            kindof1 = count;
        }
        if (temp > highest){
            highest = temp;
            kindof2 = count;
        }
    }





    cout << salsa[kindof1] << " was the lowest selling product." << endl;
    
    
    cout << salsa[kindof2] << " was the highest selling product.";

    //Process or map Inputs to Outputs

    //Display Outputs

    //Exit stage right!
    return 0;
}