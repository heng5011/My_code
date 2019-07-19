/*************************************************************************
	> File Name: 2013.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Apr 2019 07:11:53 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
/*递推 2042 */
/*
 f1 = 1
 (f2 / 2) - 1 == f1  ------- f2 = 2 * (f1 + 1)
 fn = 2 * (fn-1  +  1)
*/

int main() {
    int n;
    while (cin >> n) {
        int ans = 1;
        for(int i = 1; i < n; i++) {
            ans = 2 * (ans + 1);
        }
        cout << ans <<endl;
    }
    return 0;
}
