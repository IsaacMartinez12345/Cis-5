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
    float width, height, area1, area2;
    //Initialize Variables
    
    // User inputs
    cout << "Enter the width of rectangle 1:" << endl;
    cin >> width;
    
    cout << "Enter the height of rectangle 1:" << endl;
    cin >> height;
    
    area1 = ( width * height);  // Find area of rectangle 1 and store value.
    
    // Continue user inputs
    cout << "Enter the width of rectangle 2:" << endl;
    cin >> width;
    
    cout << "Enter the height of rectangle 2:" << endl;
    cin >> height;
    
    area2 = ( width * height);  // Find area of rectangle 2 and store value.
    
    //Process or map Inputs to Outputs
    
    //Compare areas and print results
    if ( area1 > area2 ) {
        cout << "Rectangle 1 has the greater area";
    }
    else if ( area1 < area2 ) {
        cout << "Rectangle 2 has the greater area";
    }
    else {
        cout << "The rectangles have the same area";
    }
    
    //Display Outputs
    
    
    
    //Exit stage right!
    return 0;
}