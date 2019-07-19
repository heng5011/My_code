/*************************************************************************
	> File Name: F1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Apr 2019 10:05:55 AM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main() {
    long long t, n;
    while(cin >> t) {
        while(t--) {
            cin >> n;
            long long x = ceil(sqrt(8 * n + 1) - 1) / 2;
            long long sum = x * (x - 1) / 2;
            cout << (n - sum - 1) % 9 + 1 <<endl;
        }
    }
    return 0;
}
