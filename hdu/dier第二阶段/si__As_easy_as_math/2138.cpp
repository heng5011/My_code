/*************************************************************************
	> File Name: 2138.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 23时34分00秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int check[1005] = {0};
int prime[1005] = {0};
int cnt = 0;

int solve (int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*void Init () {
    int N = 1005;
    for (int i = 2; i <= N; i++) {
        if (!check[i]) prime[cnt++] = i;
        for (int j = 0; j < cnt && prime[j] * i <= N; j++) {
            check[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}*/

int main() {
    int n, a;
    while (cin >> n) {
        int ans = 0;
        while (n--) {
            cin >> a;
            if (solve (a)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
