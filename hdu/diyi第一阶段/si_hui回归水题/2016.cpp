/*************************************************************************
	> File Name: 2016.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 11时30分39秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num[105] = {0};

int main() {
    int n;
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        int min = num[0], flag = 0;
        for (int i = 0; i < n; i++) {
            if (num[i] < min) {
                min = num[i];
                flag = i;
            }
        }
        if (flag != 0) {
            int t = num[0];
            num[0] = num[flag];
            num[flag] = t;
        }
        for (int i = 0; i < n; i++) {
            if (i == (n - 1)) {
                cout << num[i] << endl;
            } else {
                cout << num[i] <<" ";
            }
        }
    }
    return 0;
}
