/*************************************************************************
	> File Name: A.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 13时58分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[105] = {0};

int main() {
    int n, m;
    while (cin >> n >> m) {
      //  while (n--) {
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            sort(a, a + n);
            int flag = 0, ans = 0;
            for (int i = 0; i < n; i++) {
                flag += a[i];
                if (flag <= m) {
                    ans++;
                }
            }
            cout << ans << endl;
        //}
    }
    return 0;
}
