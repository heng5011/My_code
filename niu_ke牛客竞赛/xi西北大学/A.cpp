/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 13时26分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

ll a[100005] = {0};
ll b[100005] = {0};
ll c[100005] = {0};

int main () {
    ll n, t;
    //cin >> n >> t;
    while (cin >> n >> t && n && t) {
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n - 1; i++) {
            c[i] = a[i + 1] - b[i];
        }
        sort (c, c + n - 1);
        for (int i = 0; i < n - 1; i++) {
            if (c[i] + 1 <= t) {
                ans++;
                t = t - c[i] - 1;
            } else {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
