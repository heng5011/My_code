/*************************************************************************
	> File Name: 1091.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Apr 2019 10:59:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) {
            continue; 
        }
            cout<< a + b <<endl;
    }
    return 0;
}
