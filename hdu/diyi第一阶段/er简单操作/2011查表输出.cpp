/*************************************************************************
	> File Name: 2011查表输出.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Apr 2019 11:37:17 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

double a[1000];// = {0};
int main() {
    memset(a, 0, sizeof(a));
    for(int i = 1; i < 1000; i++) {
        double t;
        if(i % 2 == 0) {
            t = -1.0 / i;
        } else {
            t = 1.0 / i;
        }
        a[i] = a[i - 1] + t;
    }
    int m, n;
    while(cin >> m) {
        while(m--) {
            cin >> n;
            cout << setiosflags(ios::fixed) << setprecision(2) << a[n] <<endl;
          //  printf("%.2f\n", a[n]);
        }
    }
    return 0;
}
