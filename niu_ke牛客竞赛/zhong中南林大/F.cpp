/*************************************************************************
	> File Name: F.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 18时36分23秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        int flag = 1, ans = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'O') {
                ans += flag;
                flag++;
            } else {
                flag = 1;
                continue;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
