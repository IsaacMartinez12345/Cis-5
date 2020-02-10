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
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes


void sSort(int [], int, int, int&);

void bSort(int [], int, int, int&);


//Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number seed
    int firstResults = 0, secondResults = 0, start, end;
    int arr1 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    int arr2 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    
    //Declare Variable Data Types and Constants

    //Initialize Variables
    
    cout << "Enter the starting location to sort:" << endl;
    
    cin >> start;
    
    
    cout << "Enter the ending location to sort:" << endl;
    
    cin >> end;
    
    //Process or map Inputs to Outputs
    sSort(arr1, start, end, firstResults );
    
    bSort(arr2, start, end, secondResults);
    //Display Outputs
    cout << "Selection Sort " << firstResults  - 1 << endl;
    
    cout << "Bubble Sort " << secondResults;
    //Exit stage right!
    return 0;
}

void sSort(int Lip[],int pp,int end,int &val){
    int temp;
    for(int start = pp; start<end; start++){
        int smallest = Lip[start];
        int smallestIndex = start + 1;
        for(int lol = start; lol<end; lol++){
            if(Lip[lol] < smallest){
                smallest = Lip[lol];
                smallestIndex = lol;
            }
        }
        temp = Lip[smallest];
        
        Lip[smallest] = Lip[smallestIndex];
        
       Lip[smallestIndex] = temp;
        val++;
    }
}

void bSort(int Lip[],int start,int end,int &val){
    
    int temp, flag;
    
    for(int lol = 1; lol<end; lol++){
        flag = 0;
        
        for(int i = start; i<end-lol; i++){
            
            if(Lip[i]>Lip[i+1]){
                
                temp = Lip[i];
               Lip[i] = Lip[i+1];
                Lip[i+1] = temp;
                flag = 1;
                val++;
                
            }
        }
        if (flag == 0){
            break;
        }
    }
}