/* 
 * File:    main.cpp
 * Author:  Isaac Martinez
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream> //I/O Library
#include <fstream>  //File Stream Library
#include <iomanip>  //Format Library
#include <string.h> //String Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float GRAVITY=6.673e-8f; //Gravity cm^3/gram/sec^2
const float MSEARTH=5.9722e24f;//Mass of earth in KG
const float REARTH=6.378e3f;   //Radius of Earth in KM
const float MGKG=1.0e3f;       //Mass Kilograms to Grams
const float CMINCH=1.0f/2.54f; //Centimeters to Inches
const float INCHFT=1.0/12.0f;  //Inches to feet
const float KMM=1.0e3f;        //Kilometers to meters
const float MCM=1.0e2f;        //Meters to centimeters
const float PI=4*atan(1);
const float NCONV = 9.8;
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned char nProbs;//Number of problems in menu < 10
    unsigned char choose;//User's choice
    
    //Initialize values
    nProbs='10';
    
    //Loop on menu and problems
    do{
        //Display the menu
        cout<<endl;
        cout<<"Choose the Problem Solution to Display"<<endl;
        cout<<"0. Problem solution for Which Input is larger"<<endl;
        cout<<"1. Problem solution for Roman Numerals"<<endl;
        cout<<"2. Problem solution for Magic Date"<<endl;
        cout<<"3. Problem solution for Greater Rectangle Area"<<endl;
        cout<<"4. Problem solution for Object Mass in Newtons"<<endl;
        cout<<"5. Problem solution for Book Points Per Month"<<endl;
        cout<<"6. Problem solution for Sound Wave Through Materials"<<endl;
        cout<<"7. Problem solution for Temperatures"<<endl;
        cout<<"8. Problem solution for Areas"<<endl;
        cout<<"9. Problem solution for Magic Date"<<endl<<endl;
        cin>>choose;
        
        //Dependent upon the choice
        switch(choose)
        {
            case '0':   //Problem solution for Which Input is larger
            {
                //Declare Variable Data Types and Constants
                float x, y;
                //Initialize Variables
                cout << "Enter a number:" << endl;
                cin >> x;
                cout << "Enter a number:" << endl;
                cin >> y;
                if(x>y)
                {
                    cout << x << " is larger";
                }
                else
                {
                    cout << y << " is larger";
                }
                //Exit stage right!
                break;
            }
            case '1':   //Problem solution for Roman Numerals
            {
                //Declare Variable Data Types and Constants
                //string with error msg.
                char errstr[] = "Entered number is not valid, reenter number:";
                int x;
                //Initialize Variables
                cout << "Enter a number between 1 and 10:" << endl;
                cin >> x;
                //Process or map Inputs to Outputs
                //While loop that checks if the number is between 1 and 10.
                while ( x <= 0 || x > 10 )
                {
                    //Displays clog error and allows input.
                    clog << errstr << endl;
                    cin >> x;
                }
                //takes input and checks cases available then outputs match.
                switch ( x )
                {
                    case 1 :
                        cout << x << " is I in Roman numerals";
                        break;
                    case 2 :
                        cout << x << " is II in Roman numerals";
                        break;
                    case 3 :
                        cout << x << " is III in Roman numerals";
                        break;
                    case 4 :
                        cout << x << " is IV in Roman numerals";
                        break;
                    case 5 :
                        cout << x << " is V in Roman numerals";
                        break;
                    case 6 :
                        cout << x << " is VI in Roman numerals";
                        break;
                    case 7 :
                        cout << x << " is VII in Roman numerals";
                        break;
                    case 8 :
                        cout << x << " is VIII in Roman numerals";
                        break;
                    case 9 :
                        cout << x << " is IX in Roman numerals";
                        break;
                    case 10 :
                        cout << x << " is X in Roman numerals";
                        break;
                }
                break;
            }
            case '2':   //Problem solution for Magic Date
            {
                //Declare Variable Data Types and Constants
                int month, day, year;
                //Initialize Variables
                // User Input
                // User input month
                cout << "Enter a month:" << endl;
                cin >> month;
                // User input day
                cout << "Enter a day:" << endl;
                cin >> day;
                // User input year
                cout << "Enter a year:" << endl;
                cin >> year;
                //Process or map Inputs to Outputs
                if ( ( month * day ) == year ) 
                {
                    cout << "The date is magic";
                }
                else 
                {
                    cout << "The date is not magic";
                }
                break;
            }
            case '3':   //Problem solution for Greater Rectangle Area
            {
                //Declare Variable Data Types and Constants
                float width, height, area1, area2;
                //Initialize Variables
                // User inputs
                cout << "Enter the width of rectangle 1:" << endl;
                cin >> width;

                cout << "Enter the height of rectangle 1:" << endl;
                cin >> height;

                area1 = ( width * height );  // Find area of rectangle 1 and store value.

                // Continue user inputs
                cout << "Enter the width of rectangle 2:" << endl;
                cin >> width;

                cout << "Enter the height of rectangle 2:" << endl;
                cin >> height;

                area2 = ( width * height );  // Find area of rectangle 2 and store value.

                //Process or map Inputs to Outputs

                //Compare areas and print results
                if ( area1 > area2 )
                {
                    cout << "Rectangle 1 has the greater area";
                }
                else if ( area1 < area2 )
                {
                    cout << "Rectangle 2 has the greater area";
                }
                else
                {
                    cout << "The rectangles have the same area";
                }
                break;
            }
            case '4':   //Problem solution for Object Mass in Newtons
            {
                //Declare Variable Data Types and Constants
                float objMass, objWeight;
                //Initialize Variables
                cout << "Enter the mass of an object:" << endl;
                cin >> objMass;

                objWeight = objMass * NCONV;

                //Process or map Inputs to Outputs

                if ( objWeight >= 10 && objWeight <= 1000 ) {
                    printf ("The object weighs %.1f newtons", objWeight);
                }
                else if ( objWeight > 1000 ) {
                    cout << "The object is too heavy";
                }
                else if ( objWeight < 10 ) {
                    cout << "The object is too light";
                }
                break;
            }
            case '5':   //Problem solution for Book Points Per Month
            {
                //Declare Variable Data Types and Constants
                int x;
                //Initialize Variables
                cout << "Enter how many books you purchased this month:" << endl;
                cin >> x;
                //Process or map Inputs to Outputs
                switch ( x )
                {
                    //takes input and checks cases available then outputs match.
                    case 0 :
                        cout << "You earned 0 points.";
                        break;
                    case 1 :
                        cout << "You earned 5 points.";
                        break;
                    case 2 :
                        cout << "You earned 15 points.";
                        break;
                    case 3 :
                        cout << "You earned 30 points.";
                        break;
                    default :
                        cout << "You earned 60 points.";
                        break;
                }
                break;
            }
            case '6':   //Problem solution for Sound Wave Through Materials
            {
                //Declare Variable Data Types and Constants
                float air, water, steel, x, y;
                float total;
                char errstr[] = "Entered number is not valid, reenter number:";
                //Initialize Variables
                air = 1100;
                water = 4900;
                steel = 16400;
                //Process or map Inputs to Outputs
                cout << "Choose which medium the sound wave will travel in." << endl;
                cout << "1.Air" << endl << "2.Water" << endl << "3.Steel" <<endl;
                cin >> x;
                //Checks user input is between 1 an 3
                while ( x < 1 || x > 3)
                {
                    //Displays clog error and allows input.
                    clog << errstr << endl;
                    cin >> x;
                }

                cout << "Enter the distance the wave will travel:" << endl;
                cin >> y;
                //Checks user distance input is not equal to or less than 0
                while ( y <= 0 )
                {
                    //Displays clog error and allows input.
                    clog << errstr << endl;
                    cin >> y;
                }
                if ( x == 1) {
                    total = y / air;
                    printf("The wave will take %.4f seconds", total);
                }
                else if ( x == 2) {
                    total = y / water;
                    printf("The wave will take %.4f seconds", total);
                }
                else if ( x == 3) {
                    total = y / steel;
                    printf("The wave will take %.4f seconds", total);
                }
                break;
            }
            case '7':   //Problem solution for Temperatures
            {
                //Declare Variable Data Types and Constants
                float userTemp, ethFP, ethBP, mercFP, mercBP,
                        oxyFP, oxyBP, waterFP, waterBP;
                char b[] = " will boil";
                char f[] = " will freeze";
                ethBP = 172;
                ethFP = -173;
                mercBP = 676;
                mercFP = -38;
                oxyBP = -306;
                oxyFP = -362;
                waterBP = 212;
                waterFP = 32;
                //Initialize Variables
                cout << "Enter a temperature:" << endl;
                cin >> userTemp;
                //Process or map Inputs to Outputs
                //Freezing Point
                if ( userTemp <= ethFP ) {
                cout << "Ethyl alcohol" << f << endl;
                }
                if ( userTemp <= mercFP ) {
                cout << "Mercury" << f << endl;
                }
                if ( userTemp <= oxyFP ) {
                    cout << "Oxygen" << f << endl;
                }
                if ( userTemp <= waterFP ) {
                cout << "Water" << f << endl;
                }
                //Boiling
                if ( userTemp >= ethBP ) {
                cout << "Ethyl alcohol" << b << endl;
                }
                if ( userTemp >= mercBP ) {
                cout << "Mercury" << b << endl;
                }
                if ( userTemp >= oxyBP ) {
                    cout << "Oxygen" << b << endl;
                }
                if ( userTemp >= waterBP ) {
                cout << "Water" << b << endl;
                }
                break;
            }
            case '8':   //Problem solution for Areas
            {
                //Declare Variable Data Types and Constants
                int x; 
                float height, base, length, width, radius,
                    areaC, areaR, areaT;
                char errstr[] = "Invalid entry, Reenter:";
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout << "Geometry Calculator" << endl;
                cout << "1. Calculate the Area of a Circle"<< endl 
                     << "2. Calculate the Area of a Rectangle" << endl 
                     << "3. Calculate the Area of a Triangle" << endl
                     << "4. Quit" << endl;
                cin >> x;
                //Checks user input is between 1 an 3
                while ( x < 1 || x > 4 )
                {
                    //Displays clog error and allows input.
                    clog << errstr << endl;  
                    cin >> x;
                }

                switch ( x ) {
                    case 1 :
                    {
                        //Area of a circle
                        cout << "Enter the radius of the circle:" << endl;
                        cin >> radius;
                        while ( radius < 0 )
                        {
                            clog << errstr << endl;
                            cin >> radius;
                        }
                        areaC = (pow((radius ), 2))*PI;
                        printf("The area of the circle is %.1f", areaC);
                        break;
                    }
                    case 2 :
                    {
                        //area of a rectangle
                        cout << "Enter the length of the rectangle:" << endl;
                        cin >> length;
                        while ( length < 0 )
                        {
                            clog << errstr << endl;
                            cin >> length;
                        }
                        cout << "Enter the height of the rectangle:" << endl;
                        cin >> width;
                        while ( width < 0 )
                        {
                            clog << errstr << endl;
                            cin >> width;
                        }
                        areaR = length * width;
                        printf("The area of the rectangle is %.1f", areaR);
                        break;
                    }
                    case 3 :
                    {
                        //Area of a triangle
                        cout << "Enter the base of the triangle:" << endl;
                        cin >> base;
                        while ( base < 0 )
                        {
                            clog << errstr << endl;
                            cin >> base;
                        }
                        cout << "Enter the height of the triangle:" << endl;
                        cin >> height;
                        while ( height < 0 )
                        {
                            clog << errstr << endl;
                            cin >> height;
                        }
                        areaT = base * height * .5;
                        printf("The area of the triangle is %.1f", areaT);
                        break;
                    }
                    case 4 :
                    {
                        //Quit program
                        return 0;
                        break;
                    }
                }
                break;
            }
            case '9':  //Problem solution for Phone Charge Rates
            {
                //Declare Variable Data Types and Constants
                float callStart, rateA, rateB, rateC, charges;
                int callMin;
                char errstr[] = "Invalid entry, Reenter:";
                //Initialize Variables
                rateA = 0.05;
                rateB = 0.45;
                rateC = 0.20;
                cout << "Enter the starting time:" << endl;
                cin >> callStart;
                //Input validation no larger than 23:59
                while ( callStart > 23.59 )
                {
                    cout << errstr << endl;
                    cin >> callStart;
                }
                //Input validation no larger than 0.59
                while ( callStart-static_cast<int>(callStart) > 0.59 )
                {
                    cout << errstr << endl;
                    cin >> callStart;
                }
                cout << "Enter the number of minutes of the call:" << endl;
                cin >> callMin;

                if (callStart < 06.59)
                {
                    charges = callMin * rateA;
                    printf ("The charges are $%.2f", charges);
                }
                if (callStart > 07.00 && callStart < 19.00)
                {
                    charges = callMin * rateB;

                    printf ("The charges are $%.2f", charges);
                }
                if (callStart > 19.01 && callStart < 23.59)
                {
                    charges = callMin * rateC;
                    printf ("The charges are $%.2f", charges);
                }
                break;
            }
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choose<=nProbs);

    //Exit stage right!
    return 0;
}