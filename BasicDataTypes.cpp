/*
Write a program to print each element on a new line in the same order it was received as input. Note that the 
floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

#include <iostream>
#include<iomanip>
#include <cstdio>
using namespace std;

int main(){
    int i;
    float f;
    double d;
    char c;
    long l;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl << l << endl << c << endl;
    cout << std::fixed << std::setprecision(3) << f << endl;
    cout << std::fixed << std::setprecision(9) << d;
    // Complete the code.
    return 0;
}
