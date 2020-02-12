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
    const float chestAdjust = 0.125;
    const float waistAdjust = 0.1;
    const int JINCREMENT = 10;
    const int WINCREMENT = 2;
    
    float height = 0;
    float weight = 0;
    float age = 0;
    float hatSize = 0;
    float jacketSize = 0;
    float waistSize = 0;
    float totalChestAdj;
    float totalwaistAdj;
    
    char choice;
    
    bool run = true;
    //Initialize or input i.e. set variable values
    do
    {
        cout << setprecision(1) << fixed;
        //User input -- HEIGHT
        cout << "Enter height(inches):" << endl;
        cin >> height;
        cout << endl;
        //User input -- WEIGHT
        cout << "Enter Weight(pounds):" << endl;
        cin >> weight;
        cout << endl;
        //User input -- AGE
        cout << "Enter age:" << endl;
        cin >> age;
        cout << endl;
        
        //Hat size computation
        hatSize = (weight/height)*2.9;
        //Jacket size computation
        if (age <= 39)
        {
            jacketSize = (height*weight)/288;
        }
        else if (age >= 40)
        {
            for ( int i = 40; i <= age; i+= JINCREMENT)
            {
                totalChestAdj += chestAdjust;
            }
            
            jacketSize = ((height*weight)/288.0)+totalChestAdj;
        }
        //Waist size computation -- Waist in inches = weight divided by 5.7 and then
        //adjusted by adding 1/10 of an inch for each 2 years over age 28. (note that the adjustment 
        //only takes place after a full 2 years. So, there is no adjustment for age 29, but 1/10 of an 
        //inch is added for age 30.)
        if (age < 28)
        {
            waistSize = weight/5.7;
        }
        else if (age >= 30)
        {
            for ( int i = 30; i <= age; i+= WINCREMENT)
            {
                totalwaistAdj += waistAdjust;
            }
            
            waistSize = (weight/5.7)+totalwaistAdj;
        }
        
        
        cout << "Hat size = " << hatSize << endl;
        cout << "Jacket size = " << jacketSize << endl;
        cout << "Waist size = " << waistSize << endl;
        cout << endl;
        //Exit sequence.
        cout << "Run again:" << endl;
        cin >> choice;
        
        if(choice == 'y')
        {
            run = true;
            cout << endl;
            continue;
        }
        else if(choice == 'n')
        {
            run = false;
            
        }
    }while(run == true);
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}