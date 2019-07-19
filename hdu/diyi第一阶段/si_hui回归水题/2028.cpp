/*************************************************************************
	> File Name: 2028.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月22日 星期三 19时38分53秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int gcd (int a, int b) {
    return (b == 0) ? a : gcd(b, a % b); //别忘了写gcd, 递归老忘函数名
}

int main() {
    int n;
    while (cin >> n) {
        int a, b;
        cin >> a;
        for (int i = 1; i <= n - 1; i++) {
            cin >> b;
            a = a / gcd(a, b) * b;
        }
        cout << a << endl;
    }
    return 0;
}

