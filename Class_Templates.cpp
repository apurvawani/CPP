/*
Input Format :
The first line contains an integer n. Input will consist of n+1 lines where n is the number given in the first line 
of the input followed by n lines. Each of the next n line contains the type of the elements provided and depending on
the type, either two strings or two integers or two floating point numbers will be given. The type will be one of 
int, float orstring types only. Out of the following two elements, you have to concatenate or add the second element 
to the first element.

Output Format :
The code provided in the code editor will use your class template to add/append elements and give the output.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template <class T>
class AddElements {
    T var;
    public:
        AddElements(T x) {
            var = x;
        }
        T add(T x) {
            return var + x;
        }
        T concatenate(T y) {
            return var + y;
        }
};    
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
