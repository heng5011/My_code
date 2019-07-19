/*************************************************************************
	> File Name: 2012.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 28 Apr 2019 07:20:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    //int x, y; 
    double x, y; //题中说的是取整数，却没有说是输入浮点数
    while (cin >> x >> y && (x || y) ) {
        int flag = 1;
        for (int i = x; i <= y; i++) {
            int n = i * i + i + 41;
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    flag = 0;
                } 
            }
        }
        (flag) ? (cout << "OK" <<endl) : (cout << "Sorry" <<endl);
    }
    return 0;
}
