/*************************************************************************
	> File Name: 2000.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Apr 2019 07:57:49 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    char a, b, c, x, y, z;
    while(cin >> a >> b >> c) {
        x = a < b ? a : b;
        x = x < c ? x : c;
        //y = b < c ? b : c;
        z = a > b ? a : b;
        z = z > c ? z : c;
        y = a + b + c - x - z;
        cout << x <<' '<< y <<' '<< z <<endl;
    }
    return 0;
}
