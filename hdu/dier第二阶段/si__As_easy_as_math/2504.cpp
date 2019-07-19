/*************************************************************************
	> File Name: 2504.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月09日 星期日 16时15分36秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    return b == 0 ? a : gcd (b, a % b);
}

int main() {
    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        int c = b + b;
        while (b != gcd(a, c)) {
            c += b;
        }
        cout << c << endl;
    }
    return 0;
}
