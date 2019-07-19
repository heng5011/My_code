/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 22时46分53秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

const ll mod = 998244353;
const int N = 400000;
ll a[N], b[N];
ll pow_k(ll x, ll n) {
    ll rec = 1;
    while (n) {
        if (n & 1) {
            rec *= x;
            rec %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return rec;
}

int main() {
    ll n, k;
    cin >> n >> k;
    ll ans = pow_k(n - 1, k) + pow(-1, k) * (n - 1);
    ans = (ans % mod + mod) % mod;
    ans = ans * pow_k(n, mod - 2) % mod;
    cout << (ans % mod + mod) % mod << endl;
    return 0;
}
