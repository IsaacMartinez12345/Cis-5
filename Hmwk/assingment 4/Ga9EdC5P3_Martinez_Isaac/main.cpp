/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2020, 12:15 PM
 * Purpose:  Truth Table
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
using namespace std;

int main(int argc, char** argv)
{    


  
    
    
    const float RISE_PER_YEAR=1.5;
    float number_of_millimeters_each_year = 0.0;
    
    cout <<"Enter how many millimeters the ocean is rising each year:" << endl;
    cout << "Year" << "\t" << "Rise(mm)" << endl;
 
    
    for (int i =1; i <= 30; i++)
   { 
      
 
        number_of_millimeters_each_year += RISE_PER_YEAR;
    
        cout << i <<  "\t" << number_of_millimeters_each_year<< endl;
 

   }
  return 0;
}