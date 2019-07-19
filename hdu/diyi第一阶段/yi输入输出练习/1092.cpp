/*************************************************************************
	> File Name: 1092.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Apr 2019 11:18:50 PM CST
 ************************************************************************/

#include<iostream>
#include<time.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(n == 0) continue;
        int ans = 0, a;
        while(n--) {
            cin >> a;
            ans += a;
        }
        cout << ans <<endl;
    }
    printf("%.6f\n", (double)clock() / CLOCKS_PER_SEC);
    return 0;
}
