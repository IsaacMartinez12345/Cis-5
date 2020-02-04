/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>

using namespace std;


int main()
{
    //declare a few named constants
    const int COOKIES_PER_BAG = 40,
              SERVINGS_PER_BAG = 10,
              CALORIES_PER_SERVING = 300;

    //declare variables needed
    int userCookies, totalCalories;

    //prompt user to enter input then read
    cout<<"Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> userCookies;

    //first write an expression to get number
    //of calories per cookie

    // CALORIES_PER_COOKIE = CALORIES_PER_SERVING / COOKIES_PER_SERVING
    // but
    // COOKIES_PER_SERVING = COOKIES_PER_BAG / SERVINGS_PER_BAG
    // so finally
    // CALORIES_PER_COOKIE = CALORIES_PER_SERVING /
    //                       (COOKIES_PER_BAG / SERVINGS_PER_BAG)

    //calculate total calories for user input
    totalCalories = userCookies * (CALORIES_PER_SERVING / (COOKIES_PER_BAG / SERVINGS_PER_BAG));

    //print output
    cout << "You consumed " << totalCalories << " calories.";

    //return 0 to mark successful termination
    return 0;
}
