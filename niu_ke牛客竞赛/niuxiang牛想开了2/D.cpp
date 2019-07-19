/*************************************************************************
	> File Name: D1.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 19时51分51秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;

typedef long long ll;
const int maxn = 1e5 + 10;
ll a[maxn] = {0};
ll sum[maxn] = {0};
map <ll, ll> cnt;

int main() {
    ll k, b, n, ans = 0, t = 0, z = 0;
    cin >> k >> b >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%lld", a + i);
        sum[i] = (sum[i - 1] + a[i]) % (k - 1);
        if (a[i] == 0) {
            t++;
            z += t;
        } else {
            t = 0;
        }
    }
    if (b == 0) {
        ans = z;
    } else {
        cnt[0]++;
        for (int i = 1; i <= n; i++) {
            ans += cnt[(sum[i] - b + k - 1) % (k - 1)];
            cnt[sum[i]]++;
        }
        if (b == k - 1) {
            ans -= z;
        }
    }
    cout << ans << endl;
    return 0;
}
