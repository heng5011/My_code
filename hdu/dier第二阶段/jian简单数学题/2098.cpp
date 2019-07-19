/*************************************************************************
	> File Name: B1.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 08时28分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_prime[10005] = {0};

int prime(int m) {
    if (m == 1) {
        return 0;
    }
    for (int i = 2; i * i <= m; i++) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, total;
    while (cin >> n && n) {
        int flag = 0;
        for (int i = 2; i < n; i++) {
            if (prime(i) != 0) {
                is_prime[flag++] = i;
            }
        }
        int ans = 0;
        for (int i  = 0; i < flag; i++) {
            for (int j = i + 1; j < flag; j++) {
                if (is_prime[i] + is_prime[j] == n) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
