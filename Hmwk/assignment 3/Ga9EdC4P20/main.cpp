/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
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
    float air, water, steel, x, y;
    float total;
    char errstr[] = "Entered number is not valid, reenter number:";
    //Initialize Variables
    air = 1100;
    water = 4900;
    steel = 16400;
    //Process or map Inputs to Outputs
    cout << "Choose which medium the sound wave will travel in." << endl;
    cout << "1.Air" << endl << "2.Water" << endl << "3.Steel" <<endl;
    cin >> x;
    
    while ( x < 1 || x > 3) {       //Checks user input is between 1 an 3
        clog << errstr << endl;     //Displays clog error and allows input.
        cin >> x;
    }
    
    cout << "Enter the distance the wave will travel:" << endl;
    cin >> y;
    
    while ( y <= 0 ) {              //Checks user distance input is not equal to or less than 0
        clog << errstr << endl;     //Displays clog error and allows input.
        cin >> y;
    }
    
    if ( x == 1) {
        total = y / air;
        printf("The wave will take %.4f seconds", total);
    }
    else if ( x == 2) {
        total = y / water;
        printf("The wave will take %.4f seconds", total);
    }
    else if ( x == 3) {
        total = y / steel;
        printf("The wave will take %.4f seconds", total);
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}