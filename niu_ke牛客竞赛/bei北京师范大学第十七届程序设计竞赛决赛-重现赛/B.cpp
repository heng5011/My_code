/*************************************************************************
	> File Name: B.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月12日 星期日 16时44分47秒
 ************************************************************************/

/*#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

const int MAX = 18 + 1;
typedef long long ll;
string s;

void solve() {
    ll ans = 0;
    for (int i = 2; i <= 10; i++) {
        ll total = 0;
        ll base = 1;
        for (int j = s.length() - 1; j >= 0; j--) {
            total += base * (s[j] - '0');
                base *= i;
        }
        ans += total;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    //cin.get();　//加不加都行
    while (t--) {
        cin >> s; //不含空格
       // getline (cin, s); //含空格
        solve();
    }
    return 0;
}*/
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;

typedef long long ll;
char a[50] = {0};

void solve () {
    ll ans = 0;
    for (int i = 2; i <= 10; i++) {
        ll total = 0;
        ll base = 1;
        for (int j = strlen(a) - 1; j >= 0; j--) {
            total += base * (a[j] - '0');
            base *= i;
        }
        ans += total;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a;
        solve();
    }
    return 0;
}

