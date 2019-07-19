/*************************************************************************
	> File Name: 2070.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月30日 星期四 16时16分17秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef long long ll;
ll a[105] = {0};

/*注意是大数*/
int main() {
    ll n;
    while (cin >> n && n != -1) {
        a[0] = 0;
        a[1] = 1;
        for (ll i = 0; i < 100; i++) {
            if (i > 1) {
                a[i] = a[i - 1] + a[i -2];
            }
        }
        cout << a[n] << endl;
    }
    return 0;
}
