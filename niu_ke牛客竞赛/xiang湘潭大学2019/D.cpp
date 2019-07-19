/*************************************************************************
	> File Name: D.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月05日 星期日 19时36分28秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>

typedef long long ll;

using namespace std;

int a[10000005] ={0};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
