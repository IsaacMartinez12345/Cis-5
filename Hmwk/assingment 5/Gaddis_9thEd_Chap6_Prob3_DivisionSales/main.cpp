/* 
 * File:    main.cpp
 * Author:  Isaac Martinez
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float nwSales, neSales, swSales, seSales;
    string NW = "Northwest", NE = "Northeast", SW = "Southwest", SE = "Southeast";
    //Initialize Variables
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    neSales = getSales(NE);
    seSales = getSales(SE);
    nwSales = getSales(NW);
    swSales = getSales(SW);
    
    
    findHighest(nwSales,neSales,swSales,seSales);
    //Process or map Inputs to Outputs
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}

float getSales(string division)
{
    float sales;
do
{
    cout << "Enter the sales for " << division << " division:$" << endl;
    cin >> sales;
}
    while (sales < 0.0);
    return sales;
}

void findHighest(float nwSales, float neSales, float swSales, float seSales)
{
float highestSales = neSales;
string highestDivision = "Northeast";

    if (nwSales >= highestSales)
    {
        highestSales = nwSales;
        highestDivision = "Northwest";
    }
    
    if (swSales >= highestSales)
    {
        highestSales = swSales;
        highestDivision = "Southwest";
    }
    
    if (seSales > highestSales)
    {
        highestSales = seSales;
        highestDivision = "Southeast";
    }
    cout << "The " << highestDivision << " division had the highest sales of $" << highestSales;
}