/*
Given two positive integers, a & b; for each integer n in the interval [a,b]:
1.If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
2.Else if n > 9 and it is an even number, then print "even".
3.Else if n > 9 and it is an odd number, then print "odd".
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a , b;
    cin >> a >> b;
    for(int i = a ; i <= b ; i++){
        if(i <= 9){
            switch(i){
                case 1:
                    cout << "one" << endl;
                    break;
                case 2:
                    cout << "two" << endl;
                    break;
                case 3:
                    cout << "three" << endl;
                    break;
                case 4:
                    cout << "four" << endl;
                    break;
                case 5:
                    cout << "five" << endl;
                    break;
                case 6:
                    cout << "six" << endl;
                    break;
                case 7:
                    cout << "seven" << endl;
                    break;
                case 8:
                    cout << "eight" << endl;
                    break;
                case 9:
                    cout << "nine" << endl;
                    break;
            }
        }
        else{
            if(i%2==0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
    // Complete the code.
    return 0;
}
