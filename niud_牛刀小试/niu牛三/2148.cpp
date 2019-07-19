/*************************************************************************
	> File Name: A.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时48分46秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[10005] = {0};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        //cout << a[k] << endl;
        int flag = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] > a[k]) {
                flag++;
            }
        }
        cout << flag << endl;
    }
    return 0;
}
