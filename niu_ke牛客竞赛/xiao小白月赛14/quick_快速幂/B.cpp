/*************************************************************************
	> File Name: B.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 20时21分05秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define N 100010
typedef long long  ll;
const ll mod = 998244353;

int n, k, p;
ll fac[N], inv[N];

ll qmod(ll base, ll n) {
    ll res = 1;
    while (n) {
        if (n & 1) {
            res = res * base % mod;
        }
        base = base * base % mod;
        n >>= 1;
    }
    return res;
}

ll C(int n, int m) {
    return fac[n] * inv[m] % mod * inv[n - m] % mod;
}

int main() {
    fac[0] = 1;
    for (int i = 1; i < N; i++) {
        fac[i] = (fac[i - 1] * i) % mod;
    }
    inv[100000] = qmod(fac[100000], mod - 2);
    for (int i = 100000; i >= 1; --i) {
        inv[i - 1] = (inv[i] * i) % mod;
    }
    while (cin >> n >> k >> p) {
        int fp = (1 - p + mod) % mod;
        ll res = 0;
        ll base = qmod(p, k);
        for (int i = k; i <= n; ++i) {
            (res += C(n, i) *  base % mod * qmod(fp, n -i)) %= mod;
            base = base * p % mod; //
        }
        cout << res << endl;
    }
    return 0;
}
