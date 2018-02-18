/*
Consider an n-element array, a, where each index i in the array contains a reference to an array of k_i integers 
(where the value of k_i varies from array to array).
Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes 
an index in the array located at a[i]. For each query, find and print the value of element j in the array at location 
a[i] on a new line.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , query;
    cin >> n >> query;
    std :: vector<vector<int> > a;
    for(int i = 0 ; i < n ; i++){
        int size;
        cin >> size;
        std :: vector<int> ar;
        for(int j = 0 ; j < size ; j++){
            int value;
            cin >> value;
            ar.push_back(value);
        }
        a.push_back(ar);
    }
    for(int i = 0 ; i < query ; i++){
        int q , ar_i;
        cin >> q >> ar_i;
        cout << a[q][ar_i] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
