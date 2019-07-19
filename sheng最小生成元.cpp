/*************************************************************************
	> File Name: sheng最小生成元.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Apr 2019 07:30:36 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#define max 100005
using namespace std;

int ans[max] = {0};

int main() {

    memset(ans, 0, sizeof(ans));

    for (int i = 0; i < max; i++) {
        int x = i; 
        int y = i;
        while ( x ) {
            y += x % 10;
            x /= 10;
        }
        if (ans[i] == 0 || i < ans[y]) {
            ans[i] = y;
        }
    }
    int n;
    while (cin >> n) {
        cout << ans[n] <<endl;
    }
    return 0;
}
