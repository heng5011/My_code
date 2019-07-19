/*************************************************************************
	> File Name: B.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月27日 星期一 19时56分45秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

typedef long long ll;

ll quick_mul (ll a, ll b, ll mod) {
    ll ans = 0;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b /= 2;
    }
    return ans;
}

ll quick_pow (ll a, ll b, ll mod) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = quick_mul(ans, a, mod);
        }
        a = quick_mul(a, a, mod);
        b /= 2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q, n, p;
        cin >> q >> n >> p;
        //ll mod = p;
        ll mod = (q - 1) * p;
        //cout << quick_pow(q, n + 1, mod) << endl;
        //cout << quick_mul(q, n, p) << endl;
        cout << (q - quick_pow(q, n + 1, mod)) / (1 - q) << endl;
    }
    return 0;
}
