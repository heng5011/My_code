/*************************************************************************
	> File Name: 2032.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月10日 星期五 15时17分46秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[50][50] = {0};

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <=i; j++) {
                if (i == j || j == 1) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << a[i][j];
                if (j < i) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
