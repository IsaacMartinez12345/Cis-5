/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2020, 12:15 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
 double angle, sine, cosine, tangent;
int x;
 cout << "Calculate trig functions\n";

 cout << "Input the angle in degrees.\n";
 cin >> angle;
 x=angle;
 angle=(M_PI/180)*(angle);
 
 sine = sin(angle);
 cosine = cos(angle);
 tangent = tan(angle);

 
 cout << setprecision(4) << fixed;
 cout << "sin(" << x <<") = " << sine << endl;
 cout << "cos(" << x <<") = " << cosine << endl;
 cout << "tan(" << x <<") = " << tangent  ;

 

 return 0;
}