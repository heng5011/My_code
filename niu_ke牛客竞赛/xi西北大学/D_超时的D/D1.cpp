/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月14日 星期二 17时21分46秒
 ************************************************************************/

#include <iostream>

using namespace std;

int n, m, a[100005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    int num, l, r;
    while (m--) {
        cin >> num >> l >> r;
        if (num == 1) {
            int t = 1;
            for(int i = l; i <= r; i++) {
                a[i] = t;
                t++;
            }
        }
        if (num == 2) {
            int sum = 0;
            for(int i = l; i <= r; i++) {
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}

