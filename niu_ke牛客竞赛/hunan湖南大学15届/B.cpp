/*************************************************************************
	> File Name: B.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 10时30分27秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef long long ll;

ll quick_pow (ll a, ll b, ll mod) {
    if (b < 0) return 0;
    ll ret = 1;
    a %= mod;
    while (b) {
        if (b & 1) ret = (ret * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ret;
}

ll inv(ll a, ll mod) {
    return quick_pow (a, mod - 2, mod);
}

int main () {
    ll n, r, p;
    cin >> n >> r >> p;
    ll ans = r;
    for (int i = 1; i < n; i++) {
        ans = ((r % p) *(ans % p + 2 * r % p) % p) * quick_pow((ans % p + 3 * r % p) % p, p - 2, p) % p;
    }
    cout << ans << endl;
    return 0;
}


