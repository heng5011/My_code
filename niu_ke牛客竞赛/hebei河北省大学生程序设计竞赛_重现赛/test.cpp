/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月27日 星期一 20时09分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

ll quick_pow (int a, int b) {
    int ans = 1;
    while (b) {
        if (b % 2 == 1) { // (b & 1)
            ans *= a;
        }
        a = a * a;
        b /= 2; // b >>= 1;
    }
    return ans;
}

ll quick_mul (int a, int b) {
    int ans = 0;
    while (b) {
        if (b % 2 == 1) { // (b & 1)
            ans += a;
        }
        a = a + a;
        b /= 2; // b >>= 1;
    }
    return ans;
}
