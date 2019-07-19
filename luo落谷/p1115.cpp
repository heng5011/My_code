/*************************************************************************
	> File Name: p1115.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Apr 2019 12:09:05 AM CST
 ************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n[200001], p, ans[200001] = {0};
    int sum = -9999999; 
    cin >> p;
    for(int i = 1;  i <= p; i++) {
        cin >> n[i];
        ans[i] = max(ans[i - 1] + n[i], n[i]);
        sum = max(sum, ans[i]);
    }
    cout << sum <<endl;
    return 0;
}
