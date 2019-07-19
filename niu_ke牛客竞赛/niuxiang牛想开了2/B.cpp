/*************************************************************************
	> File Name: B.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 19时13分42秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef long long ll;
ll n;
ll cnt, ans;
ll p[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}; 
void dfs (int k,long long sum,long long num,int lim) {
    if (k > 14) return;
    if (num > cnt) cnt = num, ans = sum;
    if (num == cnt && ans > sum) ans = sum;
    for (int i = 1; i <= lim; i++) {
        if (sum <= n / p[k]) {
            sum *= p[k];
            dfs (k + 1, sum, num * (i + 1), i);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = cnt = 1;
        dfs (0, 1, 1, 15);
        cout << cnt << endl;
        //printf("%lld\n",cnt);
    }
    return 0;
}
