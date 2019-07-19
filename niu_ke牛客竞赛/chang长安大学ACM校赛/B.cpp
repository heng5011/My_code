/*************************************************************************
	> File Name: B.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月12日 星期日 15时01分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[105] = {0};

int main() {
    int t;
    while (cin >> t && t) {
        while (t--) {
            int n;
            cin >> n;
            int ans = 0;
            while (n) {
                ans++;
                n /= 2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
