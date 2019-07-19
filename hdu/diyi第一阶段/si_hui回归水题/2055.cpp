/*************************************************************************
	> File Name: 2055.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 20时10分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char x;
        int y;
        int ans = 0;
        cin >> x >> y;
        if ((x >= 'a' && x <= 'z')) {
            ans = x - 96;
            ans = -ans;
        }
        if ((x >= 'A' && x <= 'Z')) {
            ans = x - 64;
        }
        ans += y;
        cout << ans << endl;
    }
    return 0;
}
