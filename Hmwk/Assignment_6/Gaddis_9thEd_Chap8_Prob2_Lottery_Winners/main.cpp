/* 
 * File:main.cpp   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */
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
    int num[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    int winnerNum;
    
    bool winner = false;
    
    
    //Initialize Variables
    
    cout << "Enter the winning number:" << endl;
    
    cin >>winnerNum;
    
    //Process or map Inputs to Outputs
    
    
    for (int i=0; i<=9; i++){
        if (num[i] == winnerNum){
            winner = true;
        }
    }
    //Display Outputs
    
    if (winner == true){
        cout << "Congratulations you have won!";
    }
    else if (winner== false){
        cout << "No winning numbers.";
    }
    //Exit stage right!
    
    return 0;
}