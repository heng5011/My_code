/*************************************************************************
	> File Name: B.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 19时51分33秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        while (n > 1) {
            ans++;
            if (n % 10 == 0) {
                n /= 10;
            } else {
                n += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
