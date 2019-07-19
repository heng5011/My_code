/*************************************************************************
	> File Name: 2014.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Apr 2019 07:35:24 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

double a[1002] = {0};

int main() {
    int n;
    double ans;
    while (cin >> n && n != 1 && n && n <= 100) {
        ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < n - 1; i++) {
            ans += a[i];
        }
        printf("%.2f\n", ans / (n - 2));
    }
    return 0;
}
