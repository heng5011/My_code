/*************************************************************************
	> File Name: C.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 19时12分36秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//#include <bits/stdc++.h>
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if((l - 1) % 192 != 0) {
            l = l + 192 - (l - 1) % 192;
        }
        r = r - (r - 1) % 192;
        ll ans = 0;
        ans += 1ll * (l + r) * ((r - l) / 192 + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}
