/*************************************************************************
	> File Name: quick_C.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月05日 星期日 21时07分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

#define maxn  1000000005
#define ma 100005

ll quick_mul (ll a, ll b, ll r) {
    ll ans = 0;
    while (b) {
        if (b & 1)
            ans = (ans + a) % r;
        a = (a + a) % r;
        b >>= 1;
    }
    return ans;
}

ll quick_pow(ll a, ll b, ll r) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = quick_mul(ans, a, r);
        a = quick_mul(a, a, r);
        b >>= 1;
    }
    return ans;
}

int a[ma];

int main() {
    ll n;
    cin >> n;
    ll l,r;
    ll ans = 0;
    while (n--) {
        cin >> l >> r;
        if (l != r) {
        if (( l - 1) / 192 == (r - 1) / 192) {
            if (quick_pow (l, 3, 192) == 1) {
                cout << l << endl;
            } else {
                cout << "0" << endl;
            } 
        } else {
            if (quick_pow(l, 3, 192) != 1) {
                l = (l - 1) / 192 + 1;
                r = (r - 1) / 192 + 1;
                ll sl = l + l * (l - 1) * 192 / 2;
                ll sr = r + r * (r - 1) * 192 / 2;
                ans = sr - sl;
                cout << ans << endl;
            } else {
                    l = (l - 1) / 192 + 1;
                    r = (r - 1) / 192 + 1;
                    ll sl = l + l * (l - 1) * 192 / 2;
                    ll sr = r + r * (r - 1) * 192 / 2;
                    ans = sr - sl;
                    int al = 1 + (l - 1) * 192;
                    cout << ans + al << endl;
                }
             
            }
        } else {
            if (quick_pow(l, 3, 192) == 1) {
                cout << l <<endl;
            }
        }
    }
}
