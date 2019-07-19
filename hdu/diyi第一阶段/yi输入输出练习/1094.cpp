/*************************************************************************
	> File Name: 1094.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Apr 2019 06:28:36 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int sum = 0;
        while(n--) { 
            int a;
            cin >> a;
            sum += a;
        }
        cout << sum <<endl;
    }
    return 0;
}
