/*************************************************************************
	> File Name: 1197.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 26 Apr 2019 06:53:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int sum(int x, int y) {
    int num = 0;
    while(x) {
        num += x % y;
        x /= y;
    }
    return num;
}

int main() {
    for(int i = 2992; i < 10000; i++) { //十进制 = 十二进制 = 十六进制
        if(sum(i, 10) == sum(i, 12) && sum(i, 12) == sum(i, 16)) { //if(sum(i, 10) == sum(i, 12) && sum(i, 10) == sum(i, 16)) {}
            cout << i <<endl;
        }
    }
    return 0;
}
