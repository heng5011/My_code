/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 08时47分49秒
 ************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int a[10] = {0};
int b[10] = {0};

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < 6; i++) {
            cin >> a[n];
        }
        for (int i = 0; i < 6; i++) {
            cin >> b[n];
        }
        sort(a, a + n);
        sort(b, b + n);
        int flag = 0;
        for (int i  = 0; i < n; i++) {
            if (a[i] == b[i]) {
                flag = 1;
            }
        }
        flag ? (cout << "Twin snowflakes found." << endl) : (cout << "No two snowflakes are alike." << endl);
    }
    return 0;
}
