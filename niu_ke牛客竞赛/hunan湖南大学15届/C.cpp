/*************************************************************************
	> File Name: C.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月01日 星期六 13时48分38秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
    int t, n;
    while (cin >> t) {
        while (t--) {
            int ans = 0;
            cin >> n;
            while(n) {
                n = n & (n - 1);
                ans++;
                //n /= 2;
                //n = n >> 1;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
