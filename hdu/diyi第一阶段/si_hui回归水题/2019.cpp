/*************************************************************************
	> File Name: 2019.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月06日 星期一 19时30分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int a[105] = {0};

int main() {
    int n, m;
    while (cin >> n >> m && n && m) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        a[n] = m;
        sort(a, a + n + 1);
        for (int i = 0; i < n + 1; i++) {
            if (i == n) {
                cout << a[i] << endl;
            } else {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
