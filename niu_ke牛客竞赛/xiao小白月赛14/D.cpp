/*************************************************************************
	> File Name: D.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 19时34分32秒
 ************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int a[100005] = {0};

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[k - 1] << endl;
    return 0;
}
