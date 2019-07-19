/*************************************************************************
	> File Name: 2020.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月08日 星期三 17时21分00秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return abs(a) > abs(b);
}

int a[105] = {0};

int main() {
    int n;
    while(cin >> n && n) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        /*for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << a[n - 1] << endl;
            } else {
                cout << a[i] << " ";
            }
        }*/
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
