/*************************************************************************
	> File Name: M.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月12日 星期日 15时23分04秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;
ll a[1000010] = {0};
int n, c;

ll gcd (int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

/*void yin_zi () {
    for (int i = 0; i * i <= c; i++) {
        if (c % i == 0) {
            a[flag++] = i;
            a[flag++] = c / i;
        }
    }
}*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        //int n, c;
        cin >> n >> c;
        int flag = 0;
       // yin_zi();
        for (int i = 1; i * i <= c; i++) {
            if (c % i == 0) {
                a[flag++] = i;
                a[flag++] = c / i;
            }
        }

        ll ans = -1;
        for (int i = 0; i < flag; i++) {
            for (int j = i; j < flag; j++) {
                ll cur = a[i] * a[j];
                if (cur > ans && cur / gcd(a[i], a[j]) == c && a[i] <= n && a[j] <= n) {
                    ans = cur;
                }
            }
        }
        cout << ans  << endl;
    }
    return 0;
}
