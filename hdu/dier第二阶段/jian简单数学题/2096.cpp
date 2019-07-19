/*************************************************************************
	> File Name: 2096.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 19时45分41秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

/*int main() {
    int t, a, b, ans;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        (a >= 100) ? (a %= 100) : (a);
        (b >= 100) ? (b %= 100) : (b);
        ans = a + b;
        if (ans >= 100) {
            ans %= 100;
        }
        cout << ans << endl;
    }
    return 0;
}*/

const int mod = 100;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (a % mod + b % mod) % mod << endl;
    }
    return 0;
}
