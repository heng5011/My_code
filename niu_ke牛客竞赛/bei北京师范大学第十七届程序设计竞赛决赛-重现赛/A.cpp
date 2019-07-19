/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月12日 星期日 16时19分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[50] = {0};

int main() {
    int t;
    while (cin >> t && t) {
        while (t--) {
            for (int i = 0; i < 23; i++) {
                cin >> a[i];
            }
            sort(a, a + 23);
            int sum = 0;
            for (int i = 0; i < 23; i++) {
                sum += a[i];
            }
            cout << sum * a[0] << endl;
        }
    }
    return 0;
}
