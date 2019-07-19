/*************************************************************************
	> File Name: xian_线性筛.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 20时20分23秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int check[100000] = {0};
int prime[100000] = {0};
int cnt = 0;

void Init () {
    int N = 100000;
    for (int i = 2; i <= N; i++) { 
        if (!check[i]) prime[cnt++] = i;//没被筛掉，判为素数
        for (int j = 0; j < cnt && prime[j] * i <= N; j++) { //枚举现有素数
            check[prime[j] * i] = 1; //筛掉合数
            if (i % prime[j] == 0) break; //保证每个数只被最小因子筛掉
        }
    }
    return ;
}

int main() {
    int n;
    Init ();
    cout << prime[0] << ' ' << prime[1] << endl;
    /*while (cin >> n) {
        int flag = 0;
        for (int i = 2; i <= n; i++) {
            if (!check[n]) {
                flag = 1;
            }
        }
        cout << (flag ? "yes" : "no") << endl;
    }*/
    return 0;
}
