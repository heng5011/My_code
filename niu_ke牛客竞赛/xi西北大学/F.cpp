/*************************************************************************
	> File Name: F.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 15时49分39秒
 ************************************************************************/
//#include <bits/stdc++.h>
//#include <vector>
//#include <map>
/*#include <iostream>
#include <cstring>

const int MAX_N = 200005;
int a[MAX_N] = {0};

using namespace std;

int main() {
    int n;
    string s, s1;
    cin >> n;
    cin >> s >> s1;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < s.size(); i++) {
        a[s[i]]++;
    }
    int l = 0;
    for (int i = 0; i < s1.size(); i++) {
        a[s1[i]]--;
    }
    for (int i = 0; i < MAX_N; i++) {
        if (a[i]) {
            l++;
        }
    }
    if (l == 0 && s != s1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
*/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "no" << endl;
    } else {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
