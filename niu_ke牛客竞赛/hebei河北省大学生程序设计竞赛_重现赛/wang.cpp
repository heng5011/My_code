/*************************************************************************
	> File Name: wang.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 00时04分33秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int a[10005] = {0};

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 1; i <= m; i++) {
            for (int j = i; j <= n; j++) {
                if (j % i == 0) {
                    a[j] = !a[j];
                }
            }
        }
        int flag = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i]) {
                flag ? (cout << ',' << i) : (cout << i);
            }
            flag++;
        }
        cout << endl;
    }
    return 0;
}
