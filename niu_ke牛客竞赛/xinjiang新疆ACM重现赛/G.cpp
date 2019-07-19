/*************************************************************************
	> File Name: G.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 15时21分57秒
 ************************************************************************/

/*#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int a[100001] = {0};

long long i, j, n, s, t;
int main() {
    cin >> n;
    a[0] =- 1000000;
    for(i = 0; i < n; i++)
    {
        cin >> t;
        if(t > a[s]) a[++s] = t;
        else {
            int l = 1, h = s, m;
            while (l <= h) {
                m = (l + h) / 2;
                if(t > a[m]) l = m + 1;
                else h = m - 1;
            }
            a[l] = t;
        }
    }
    cout << s << endl;
}*/

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 50005;
const int inf = 0x3f3f3f3f;

int n, x, dp[maxn];

int main() {
    while (cin >> n) {
        memset (dp, 0x3f, sizeof(dp));
        for (int i = 0; i < n; ++i) {
            cin >> x;
            *upper_bound(dp, dp + n, x) = x;
        }
        cout << (lower_bound(dp, dp + n, inf) - dp) << endl;
    }
    return 0;
}
