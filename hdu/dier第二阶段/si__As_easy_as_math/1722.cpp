/*************************************************************************
	> File Name: 1722.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月04日 星期二 19时48分45秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int gcd (int a, int b) {
    return b == 0 ? a : gcd (b, a % b);
}

int main() {
    int p, q;
    while (cin >> p >> q) {
        cout << p + q - gcd (p, q) << endl;
    }
    return 0;
}
