/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月26日 星期三 21时05分05秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <stack>
#include <stack>
using namespace std;

stack <int> s;

int solve (int a, int b) {
    int ans = 0;
    while (a) {
        s.push(a % b);
        a /= b;
    }
    int len = s.size();
    for (int i = 0; i < len; i++) {
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main() {
    int n;
    while (cin >> n && n) {
        if (solve (n, 10) == solve (n, 16) && solve (n, 10) == solve (n, 12)) {
            cout << n << " is a Sky Number." << endl;
        } else {
            cout << n << " is not a Sky Number." << endl;
        }
    }
    return 0;
}
