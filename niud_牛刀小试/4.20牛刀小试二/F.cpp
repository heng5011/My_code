/*************************************************************************
	> File Name: F.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Apr 2019 09:19:15 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int t, n, b;
    cin >> t;
    while(t--) {
        int ind = 1;
        cin >> b;
        while(b > ind) {
            b -= ind;
            ind++;
        }
    cout << (b - 1) % 9 + 1 <<endl;
    }
    return 0;
} 
