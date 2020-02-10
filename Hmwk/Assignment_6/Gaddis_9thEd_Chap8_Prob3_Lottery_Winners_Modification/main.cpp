/* 
 * File:main.cpp   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool binSrch(int [],int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int SIZE = 10;
    int num[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int find = 0;
    //Initialize Variables
    cout << "Enter the winning number:" << endl;
    cin >> find;
    //Process or map Inputs to Outputs
    bool found=binSrch(num,SIZE,find);
    //Display Outputs
    if (found){
        cout << "Congratulations you have won!";
    }else{
        cout << "No winning numbers.";
    }
    //Exit stage right!
    return 0;
}

bool binSrch(int a[], int n, int val){
    int low=0;
    int high=n-1;
    bool found=false;
    do{
        int middle=(high+low)/2;
        if(a[middle]==val){
            found=true;
        }
        else if(a[middle]<val){
            low=middle+1;
        }
        else{
            high=middle-1;
        }
    }while(low<=high&&!found);
    return found;
}