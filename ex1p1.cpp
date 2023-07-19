//ex_1.cpp
//convers gallons to cubic feet
/*Assuming there are 7.481 gallons in a cubic foot, write a program that ask the user to enter a number of
gallons, and then displays the equivalent in cubic feet.*/

#include<iostream>
using namespace std;

int main()
{
    float gallons,cubic_feet;
    cout<<"Enter a number of gallons:\n";
    cin>>gallons;
    cubic_feet = gallons/7.481;
    cout<<"The equivalent in cubic feet is:"<<cubic_feet<<endl;
    return 0;
}
