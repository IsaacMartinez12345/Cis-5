/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr

 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables needed
    double totalCost, minInsurance;

    //prompt user for input then read
    cout << "Insurance Calculator"<<endl;
    cout << "How much is your house worth?\n";
    cin >> totalCost;
   

    //perform necessary calculations
    minInsurance = totalCost * 0.8;

    //format output then display
   
    cout << "You need $" << minInsurance;
    cout<<" of insurance.";

    //return 0 to mark successful termination
    return 0;
}