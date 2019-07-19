/*************************************************************************
	> File Name: 2136.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月04日 星期二 19时55分38秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int const N = 1000005;
int pos[N] = {0};
int prime[N] = {0};
int cnt = 1;

void Init () {
    for (int i = 2; i < N; i++) {
        if (!prime[i]) {
            pos[i] = cnt++;
            for (int j = i; j < N; j += i) {
                prime[j] = i;
            }
        }
    }
    return ;
}

int main() {
    long long n;
    Init();
    /*while (cin >> n) { // cin cout 超时
        cout << pos[prime[n]] << endl;
    }*/
    while (scanf ("%d", &n) != EOF) {
        printf ("%d\n", pos[prime[n]]);
    }
    return 0;
}

