/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2020, 12:15 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables needed
    double celsius,fahrenheit;

    //prompt user to enter input then read
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit\n";
    cin >> fahrenheit;

    //calculate temperature in Fahrenheit
    celsius =5.0/9.0*(fahrenheit - 32);

    //format output then display
    cout << setprecision(1) << fixed;
    cout <<fahrenheit<<" Degrees Fahrenheit = ";
    cout <<celsius << " Degrees Centigrade";

    //return 0 to mark successful termination
    return 0;
}