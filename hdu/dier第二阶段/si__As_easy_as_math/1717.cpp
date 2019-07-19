/*************************************************************************
	> File Name: 1717.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月10日 星期一 19时30分16秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

char s[19];
int x, y, a, b, t, i;

int gcd (int a, int b) {
    return b == 0 ? a : gcd (b, a % b);
}

int main() {
    cin >> t;
    while (t-- && cin >> s) {
        x = y = 0, a = b = 1;
        for (i = 2; s[i] >= '0' && s[i] <= '9'; i++) {
            x = x * 10 + s[i] - '0';
            a *= 10;
        }
        //无限循环小数
        if (s[i]) {
            for (i++; s[i] >= '0' && s[i] <= '9'; i++) {
                y = y * 10 + s[i] - '0';
                b *= 10;
            }
        }
        //cout << b * x + y << endl;
        if (!(--b)) { //如果循环，(--b) 把b 全部换成9的数字
            cout << x / gcd (x, a) << '/' << a / gcd (x, a) << endl; //不循环
        } else {
            cout << (b * x + y) / gcd (b * x + y, a * b) << '/' << a * b / gcd (b * x + y, a * b) << endl; //循环
        }
    }
    return 0;
}
