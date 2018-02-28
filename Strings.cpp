/*
Given two stings a & b :
In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b.
In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, 
except that their first characters are swapped.
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string a , b , s;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    s = a + b;
    cout << s << endl;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b << endl;
    // Complete the program
    return 0;
}
