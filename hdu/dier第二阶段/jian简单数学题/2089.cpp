/*************************************************************************
	> File Name: 2089.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月30日 星期四 18时23分34秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int a[1000005] = {0};

int flag (int i) {
    int t = 0;
     while (i) {
        if ((i % 10 == 4) || ((i / 10 % 10) == 6 && (i % 10 == 2))) t = 1;
        i /= 10;
    }
    if (t) return 1;
    else return 0;
}

int main() {
    for (int i = 1; i < 1000005; i++) {
        if (flag (i)) a[i] = 1;
    }
    int n, m;
    while (cin >> n >> m && n && m) {
        int ans = m - n + 1;
        for (int i = n; i <= m; i++) {
            if (a[i]) ans--;
        }
        cout << ans << endl;
    }
    return 0;
}
