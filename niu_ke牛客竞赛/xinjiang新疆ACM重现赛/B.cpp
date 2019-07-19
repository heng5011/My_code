/*************************************************************************
	> File Name: B.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 17时54分01秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    long long n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a & 1) {
            sum++;
        }
    }
    if (sum & 1) {
        cout << n << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}

