/* 
 * File:main.cpp   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void srtArr(string [], int);
bool binSrch(string [],int,string);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    
    const int NUMBER_NAMES=20;
    
    
    string find;
    
	string names[NUMBER_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
	
	//sort array first
	srtArr(names, NUMBER_NAMES);
	 
    //Initialize Variables
    cout << "Enter a name to search for:" << endl;
    
    getline(cin, find); 
    
    //user input
    //Process or map Inputs to Outputs
    
    
    
    bool found=binSrch(names,NUMBER_NAMES,find);   
    
    
    //binary search
   
   
    //Display Outputs
    
    
    if(found){
        cout << "The name was found";
    }else{
        cout << "The name was not found";
    }
    //Exit stage right!
    
    return 0;
}

void srtArr(string a[], int n){
    int startSearch, minIndex; 
    string minValue;

    for (startSearch = 0; startSearch< (n - 1); startSearch++){
        minIndex = startSearch;
        minValue = a[startSearch];
        for(int index = startSearch + 1; index < n; index++){
            if (a[index] < minValue){
                minValue = a[index];
                minIndex = index;
            }
        }
        a[minIndex] = a[startSearch];
        a[startSearch] = minValue;
    }
}

bool binSrch(string a[],int n,string val){
    //Declare variables
    
    
    
    int low=0, middle=0;
    int high=n-1;
    bool Located=false;
    do{
        middle=(high+low)/2;
        if(a[middle]==val){
            Located=true;
        }
        else if(a[middle]<val){
            low=middle+1;
        }else{
            high=middle-1;
        }
    }while(low<=high&&!Located);
    
    return Located;
}