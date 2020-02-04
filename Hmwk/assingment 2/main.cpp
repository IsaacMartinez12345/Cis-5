/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: isaac
 *
 * Created on January 22, 2020, 8:59 PM
 */
#include <iostream> 
using namespace std;
/*Program to calculate the lethal number of diet soda pop*
*for human being.*/
const double conct=.001;//1/10 of 1 percent
const int canWt=350;//grams
const double sweetener=canWt*conct;//grams/can
int main(){
    double wtMouse, wtMan, lethalDoseMouse,
    lethalDoseMan, cans;
    char ans;
    //get the values of weight and lethal dose of mouse.
    cout<<"Enter the weight of the mouse, in grams :";
    cin>>wtMouse;
    cout<<"Enter the lethal dose for the mouse, in grams: ";
    cin>>lethalDoseMouse;
    do{
//get the desired weight of dietician.

cout<<"Enter the desired weight of the dieter in grams:";
cin>>wtMan;
Calculate the lethal dose for human. Assume that lethal dose for mice is proportional to that of human.
lethalDoseMan =lethalDoseMouse* wtMan/wtMouse;
cans =lethalDoseMan /sweetener;
//display the result to user
cout<<"\nFor a Dieter with weight: " <<wtMan<<"grams.\n";
cout<<"The lethal dose of sweetener is: "<<
lethalDoseMan<<"grams.\n";
cout<<"Lethal number of cans of diet soda: "<<
Repeat calculation as often as user desires.
cout<<"\n\nRepeat for another dietician?:";
cin>>ans;

}while(ans=='y'||ans=='Y');

    return 0;
}

