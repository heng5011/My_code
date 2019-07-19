/*************************************************************************
	> File Name: 1093.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Apr 2019 11:38:09 PM CST
 ************************************************************************/

#include<iostream>
//#include<time.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a;
        while(cin >> a) {
            int ans = 0, i;
            while(a--) {
                cin >> i;
                ans += i;
            }
            cout << ans <<endl;
        }
    }
    //printf("%.6f\n", (double)clock() / CLOCKS_PER_SEC);
    return 0;
}
