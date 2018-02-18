/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of 
them. 
*/


#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int max = 0;
    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    return max;
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}

