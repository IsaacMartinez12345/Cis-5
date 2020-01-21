/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Isaac
 *
 * Created on January 12, 2020, 3:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int numberOfPods, peasPerPod, totalPeas;
    cout << "Press return after entering a number.\n";
    cout << "Enter number of pods:\n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in a pod:\n";
    cin << peasPerPod;
    totalPeas = numberOfPods * peasPerPod;
    cout << "If you have ";
    cout << numberOfPods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    return 0;
    
}
