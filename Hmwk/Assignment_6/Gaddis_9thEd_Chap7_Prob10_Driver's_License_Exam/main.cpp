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
    const int SIZE = 20;
    const int MIN_SCORE = 15;
    unsigned char key[] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B',
        'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    unsigned char answers[SIZE], dataC, solutionC;
    int num;
    int corTotal = 0, wrgTotal = 0;
    int index=0;
    int incorrect[SIZE];
    //Initialize Variables
    cout << "Enter the student's test answers:" << endl;
    //Process or map Inputs to Outputs
    for (int count=0; count<SIZE; count++){
       
       
       
        cin >> answers[count];
    }

    for (int count=0; count<SIZE; count++){
        num = (count+1);
        dataC = key[count];
        solutionC = answers[count];

        if ( dataC == solutionC){
            corTotal++;
        }
        else{
            incorrect[index] = num;
            index++;
            wrgTotal++;
        }
    }

    if (corTotal >= MIN_SCORE){
        cout << "The student passed." << endl;
    }
    else if (corTotal < MIN_SCORE){
        cout << "The student failed." << endl;
    }

    
    cout << "There were " << corTotal << " correct answers." <<endl;
    
    
    
    cout << "There were " << wrgTotal << " incorrect answers." <<endl;


    cout << "Incorrect questions:" << endl;

    for (int count=0; count<wrgTotal; count++){
        
        cout << incorrect[count] << endl;
    }

    //Display Outputs

    //Exit stage right!
    return 0;
}