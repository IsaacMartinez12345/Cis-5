//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float x;//Variable to input 10 times
    float sumTot,sumNeg,sumPos;//Sums
    
    //Initialize Variables
    sumTot=sumNeg=sumPos=0;
    
    //Process or map Inputs to Outputs
    cout<<"Input 10 numbers any order, positive or negative"<<endl;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
   ;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

 
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

   
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    //Sum total simply sum of both positive and negative
    sumTot=sumPos+sumNeg;

    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    
    cout<<"The sum Positive= "<<sumPos<<endl;
    cout<<"The sum Negative= "<<sumNeg<<endl;
    cout<<"The sum Total   = "<<sumTot<<endl;

    return 0;
}

