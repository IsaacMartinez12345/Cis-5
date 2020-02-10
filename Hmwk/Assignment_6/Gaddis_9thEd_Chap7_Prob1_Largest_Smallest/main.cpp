/* 
 * File:   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */

//System Libraries
//System Libraries
#include<iostream>
using namespace std;

int main()
{
int nums[10];
int max;
int min;

cout<<"Enter 10 integers:"<<endl;
for(int i=0; i<10; i++)
cin>>nums[i];

max=nums[0];
for(int i=1; i<10; i++)
if(nums[i] > max)
max = nums[i];

min=nums[0];
for(int i=1; i<10; i++)
if(nums[i] < min)
min = nums[i];

cout<<max<<" is the highest number."<<endl;
cout<<min<<" is the lowest number.";

return 0;
}
