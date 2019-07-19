/*************************************************************************
	> File Name: 2015.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月30日 星期二 18时28分27秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int a[105] = {0};

int main() {
    int n, m;
    while (cin >> n >> m && m && n) {
        
        int j = 0, sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 2 * i;
            if (i % m == 0 || i == n) {
                a[j++] = sum;
                sum = 0;
            }
        }
        int less = n % m;
        for(int i = 0; i < j - 1; i++) {
            cout << a[i] / m << " "; 
        }
        if (less != 0) {
            cout << a[j - 1] / less << endl;;
        } else {
            cout << a[j - 1] / m << endl;
        }
    }
    return 0;
}
