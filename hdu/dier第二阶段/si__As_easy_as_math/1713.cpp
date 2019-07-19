/*************************************************************************
	> File Name: 1713.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月04日 星期二 18时40分47秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef long long ll;

ll gcd (ll a, ll b) {
    return b == 0 ? a : gcd (b, a % b);
}

ll lcm (ll a, ll b) {
    return (a * b) / gcd (a, b);
}

int main() {
    char temp;
    ll t, m1, m2, n1, n2, ans1, ans2;
    cin >> t;
    while (t--) {
        cin >> m1 >> temp >> m2 >> n1 >> temp >> n2;
        ans1 = lcm(m1 * n2, n1 * m2); //通分求分子的最小公倍数
        ll flag = gcd (ans1, m2 * n2); //分子分母的最大公约数
        ans2 = m2 * n2 / flag; //分母约分
        ans1 /= flag; // 分子约分
        if (ans2 == 1) {
            cout << ans1 << endl;
        } else {
            cout << ans1 << "/" << ans2 << endl;
        }
    }
    return 0;
}
