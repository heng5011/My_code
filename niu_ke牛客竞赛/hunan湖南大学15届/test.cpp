/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 07时55分06秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef long long ll;

ll inv (ll t, ll p) {
    return t == 1 ? 1 : (p - p / t) * inv (p % t, p) % p;
}

int main () {
    ll n, r, p;
    cin >> n >> r >> p;
    ll ans = r;
    for (int i = 1; i < n; i++) {
        ans = ((r % p) *(ans % p + 2 * r % p) % p) * inv((ans % p + 3 * r % p) % p, p) % p;
    }
    cout << ans << endl;
    return 0;
}
