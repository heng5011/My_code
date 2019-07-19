/*************************************************************************
	> File Name: 2023.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月03日 星期五 20时30分33秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    double a[5][50];
    double c[5];
    int n, m, sum;
    double ping, g_ping;
    while (cin >> n >> m) {
        sum = 0;
        int b[50] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[j][i];
            }
        }
        for (int i = 0; i < n; i++) {
            ping = 0;
            for(int j = 0; j < m; j++) {
                ping += a[j][i];
            }
            printf("%.2f", ping / m);
            if (i != n - 1) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
        int k;
        for (k = 0; k < m; k++) {
            g_ping = 0;
            for (int j = 0; j < n; j++) {
                g_ping += a[k][j];
            }
            c[k] = g_ping / n;
            printf("%.2f", g_ping / n);
            if (k != m - 1) {
                cout << ' ';
            } else {
                cout << endl;
            }
            for(int i = 0; i < n; i++) {
                if (a[k][i] >= c[k]) {
                    b[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (b[i] == m) {
                sum++;
            }
        }
        cout << sum << endl << endl;
    }
    return 0;
}
