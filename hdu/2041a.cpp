/*************************************************************************
	> File Name: 2041a.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年07月16日 星期二 08时46分38秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int solve (int m) {
    int a = 1, b = 1, ans = 1;
    if (m == 1) return ans = 0;
    else if (m >= 2) {
        for (int i = 2; i < m; ++i) {
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
}

int main() {
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        cout << solve(m) << endl;
    }

    return 0;
}
