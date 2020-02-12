/* 
 * File:    main.cpp
 * Author:  Isaac Martinez
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
int getScore(int, int &total);
float calcAverage(int, int);
int findLowest(int sArray[5]);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int sArray[5];
    int testScore = 0;
    float average = 0.0f;
    int lowestScore = 0;
    int total = 0;
    //Initialize Variables
    for (int i = 0; i <= 4; i++)
    {
        testScore = getScore(testScore,total);
        sArray[i] = testScore;
    }
    
    lowestScore = findLowest(sArray);
    average = calcAverage(lowestScore,total);
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "The average is " << average;
    //Exit stage right!
    return 0;
}

int getScore(int testScore, int &total)
{
    cout << "Enter a test score:" << endl;
    cin >> testScore;
    
    while ( testScore < 0 || testScore > 100 )
    {
        cout << "Error: Invalid score" << endl;
        cin >> testScore;
    }
    
    total += testScore;
    
    return testScore;
}

float calcAverage(int lowest, int total)
{
    int sum = 0;
    float average = 0.0f;
    
    sum = total - lowest;
    average = sum / 4.0f;
    
    return average;
}

int findLowest(int sArray[5])
{
    int lowest = sArray[0];
    for (int i = 1; i < 5; i++)
    {
        if (sArray[i] < lowest)
        {
            lowest = sArray[i];
        }
    }
    return lowest;
}