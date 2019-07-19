/*************************************************************************
	> File Name: 2010.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 18 Apr 2019 06:28:42 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int ans[105];

int main() {
    memset(ans, 0, sizeof(ans));
    int i, j, m, n;
    int a, b, c;
    while(cin >> m >> n) {
        int sum = 0;
        for(i = 0; m <= n; m++) {
            a = m % 10;
            b = m / 10 % 10;
            c = m / 100;
            if(a * a * a + b * b * b + c * c * c == m) {
                ans[i] = m;
                i++;
            } 
        }
        if(i == 0) {
            cout << "no" <<endl;
        } else {
            for(j = 0; j < i; j++) {
                cout << ans[j];
                if(j < i - 1) {
                    cout << " ";
                }
               // cout << endl;
            }
            cout << endl;
        }
    }
        /*if(sum == 0)
            cout << "no";
            cout << endl;
    //}*/
    return 0;
}
