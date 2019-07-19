/*************************************************************************
	> File Name: F.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 10时01分10秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int a[2005][2005] = {0};
int b[2005] = {0};

int main () {
    int n, k;
    //cin >> n >> k;
    while (cin >> n >> k) { //忘加循环！！！！！！
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                a[i][j] = 0x6f6f6f6f;
            }
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        sort (b, b + n + 1);

        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i / 2; j++) {
                a[i][j] = min (a[i - 1][j], a[i - 2][j - 1] + (b[i] - b[i - 1]) * (b[i] - b[i - 1])); 
            }
        }
        cout << a[n][k] << endl;
    }
    return 0;
}

