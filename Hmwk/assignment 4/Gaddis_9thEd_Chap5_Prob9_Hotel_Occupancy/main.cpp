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
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float numFloor, numRoom, floorRoom, totalRoom;
    float occRoom = 0;
    cout << "Enter how many floors there are:" << endl;
    cin >> numFloor;
    
    for( int i = 1; i <= numFloor; i++)
    {
        
        //Find number of rooms on floor
        cout << "Enter how many rooms are on floor " << i << ":" << endl;
        cin >> floorRoom;
        //add rooms on floor to total rooms
        totalRoom += floorRoom;
        //Find number of rooms on floor
        cout << "Enter how many are occupied:" << endl;
        cin >> numRoom;
        while( numRoom < 0 )
        {
            clog << "Invalid Entry: Please enter a positive number:" << endl;
            cin >> numRoom;
        }
        //add rooms on floor to total rooms
        occRoom += numRoom;
        
    }
    cout << "There are " << occRoom << " rooms occupied." << endl;
    cout << "There are " << totalRoom-occRoom << " rooms unoccupied." << endl;
    cout << setprecision(1) << fixed << (occRoom/totalRoom)*100 << "\% of rooms are occupied.";
    //Exit stage right!
    return 0;
}