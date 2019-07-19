/*************************************************************************
	> File Name: 1955.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月20日 星期四 20时36分23秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

/*typedef long long ll;

ll quick_pow (ll a, ll b) {
    int res = 1;
    while (b) {
        if (b & 1) {
            res *= a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}*/

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        while (cin >> n >> k) {
            printf ("%I64d\n", 1LL<<n-k);
            //cout << 1ll << n - k << endl;
            //cout << quick_pow (2, n - k) << endl;
        }
    }
    return 0;
}
