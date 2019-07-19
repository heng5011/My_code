/*************************************************************************
	> File Name: 1108.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 20时14分56秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int gcd (int a, int b) {
    return (b == 0) ? a : (gcd (b, a % b));
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << a * b / gcd (a, b) << endl;
    }
    return 0;
}
