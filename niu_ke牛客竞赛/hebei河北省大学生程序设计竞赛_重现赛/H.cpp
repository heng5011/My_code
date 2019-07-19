/*************************************************************************
	> File Name: H.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 13时10分49秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

typedef long long ll;
ll x;

int solve (ll x) {
    if (x <= 9 && x >= 1) {
        return x;
    }
    ll temp = x, ans = 0;
    while (temp) {
        ans += temp % 10;
        temp /= 10;
    }
    return solve(ans);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        x = 1;
        //a = pow(n, k);
        for (int i = 0; i < k; i++) {
            x *= n;
        }
        cout << solve(x) << endl;
    }
    return 0;
}
