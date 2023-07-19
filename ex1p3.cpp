/*Write a progra that generates the following output:
10 
20
19
Use an integer constant for the 10, and arithmetic assignment operator to generate the 20, and a decrement
operator to generate the 19*/

#include<iostream>
using namespace std;
int main()
{
    int var = 10;    
    cout << var << endl;    // var is 10
    var *= 2;   // var becomes 20
    cout << var-- << endl;     // displyas var, then decrements it
    cout << var << endl;    // var is 19
    return 0;

}