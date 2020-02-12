/* 
 * File:   main.cpp
 * Author: Isaac Martinez
 * Created: Sunday 3, 2020
 * Purpose: 
 */

//System Libraries Here
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI = 3.14159;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int x; 
    float height, base, length, width, radius,
        areaC, areaR, areaT;
    char errstr[] = "Invalid entry, Reenter:";
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle"<< endl 
         << "2. Calculate the Area of a Rectangle" << endl 
         << "3. Calculate the Area of a Triangle" << endl
         << "4. Quit" << endl;
    cin >> x;
    
    while ( x < 1 || x > 4 ) {              //Checks user input is between 1 an 3
        clog << errstr << endl;     //Displays clog error and allows input.
        cin >> x;
    }
    
    switch ( x ) {
        case 1 :                    //Area of a circle
        
            cout << "Enter the radius of the circle:" << endl;
            cin >> radius;
        
            while ( radius < 0 ) {
                clog << errstr << endl;
                cin >> radius;
            }
            
            areaC = (pow((radius ), 2))*PI;
            printf("The area of the circle is %.1f", areaC);
            break;
            
        case 2 :                    //area of a rectangle
        
            cout << "Enter the length of the rectangle:" << endl;
            cin >> length;
        
            while ( length < 0 ) {
                clog << errstr << endl;
                cin >> length;
            }
            
            cout << "Enter the height of the rectangle:" << endl;
            cin >> width;
        
            while ( width < 0 ) {
                clog << errstr << endl;
                cin >> width;
            }
            
            areaR = length * width;
            printf("The area of the rectangle is %.1f", areaR);
            break;
            
        case 3 :                    //Area of a triangle
        
            cout << "Enter the base of the triangle:" << endl;
            cin >> base;
        
            while ( base < 0 ) {
                clog << errstr << endl;
                cin >> base;
            }
            
            cout << "Enter the height of the triangle:" << endl;
            cin >> height;
        
            while ( height < 0 ) {
                clog << errstr << endl;
                cin >> height;
            }
            
            areaT = base * height * .5;
            printf("The area of the triangle is %.1f", areaT);
            break;
            
        case 4 :                    //Quit program
        
            return 0;
            break;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}