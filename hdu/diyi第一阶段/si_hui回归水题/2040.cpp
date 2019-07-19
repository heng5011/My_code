/*************************************************************************
	> File Name: 2040.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 19时09分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= a / 2; i++) {
            if (a % i == 0) {
                sum1 += i;
            }
        }
        for (int i = 1; i <= b / 2; i++) {
            if (b % i == 0) {
                sum2 += i;
            }
        }
        (sum1 == b && sum2 == a) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
    return 0;
}
