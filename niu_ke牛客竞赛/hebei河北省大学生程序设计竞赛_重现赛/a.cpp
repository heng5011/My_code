/*************************************************************************
	> File Name: aaa.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 14时56分02秒
 ************************************************************************/

#include<iostream>

using namespace std;

typedef long long ll;

inline int xxs(ll a, ll b, ll m) {
    ll ans = 1, base = a;
    while(b) {
        if(b & 1) {
            ans *= base;
            ans %= m;
        }
        base *= base;
        base %= m;
        b >>= 1;
    }
    return ans % m;
}

int t;

int main() {
    cin >> t;
    int q, n, p;
    while(t--) {
        cin >> q >> n >> p;
        ll sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += xxs(q, i, p);
            sum %= p;
        }
        cout << sum << endl;
    }
    return 0;
}

