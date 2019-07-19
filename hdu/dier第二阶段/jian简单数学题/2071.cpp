/*************************************************************************
	> File Name: 2071.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月30日 星期四 16时56分27秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

double a[105] = {0};

int main() {
    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            sort (a, a + n);
            printf ("%.2f\n", a[n - 1]);
            //cout << a[n - 1] << endl;
        }
    }
    return 0;
}
