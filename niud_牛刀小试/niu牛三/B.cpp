/*************************************************************************
	> File Name: hdoj2098.c
	> Author: 
	> Mail: 
	> Created Time: 2019年05月23日 星期四 21时10分38秒
 ************************************************************************/

#include<stdio.h>
#define max 10010
int prime[max + 10] = {0};

void is_prime() {
    for (int i = 2; i * i <= max; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= max; j += i) {
                prime[j] = 1;
            }
        }
    }
    return ;
}

int main() {
    int x, y;
    is_prime();
    while (scanf("%d", &x) && x != 0) {
        int num = 0;
        for (int i = 2; i < x / 2; i++) {
            if (prime[i] == 0 && prime[x - i] == 0) {
                printf("[%d %d]", i, x - i);
                num++;
            } 
        }
        printf("%d\n", num);
    }
    return 0;
}

/*#include <iostream>
#include <cstring>
#define N 10000
using namespace std;
int a[10001], p[10001], t = 0; 	// pnum = 0初始化没有素数
void arr() {
	memset(a, 0, sizeof(a));	//先将所有数看做素数，然后开始筛选
	a[0] = 1, a[1] = 1;		//把 0和 1 排除
	for(int i = 2; i <= N; i++) {	//遍历筛去所有最大因数是 i的合数
		if(!a[i]) {
			p[t++] = i;	//把素数记录下来
		}
		//遍历已知素数中比 i的最小素因数小的素数，并筛去合数
	:	for(int j = 0; j < t && p[j] * i <= N; j++) {
			a[p[j] * i] = 1;		//筛去合数
			if(i % p[j] == 0) break;
		}
	}
	return ;
}
int main() {
	int m, n;
	arr();
	while(cin >> m >> n) {
		int q = 0;
		for(int i = m; i <= n; i++) {
			if(!a[i])	q++;	// 求 m--n之间素数的个数
		}
		cout << q << endl;
	}
	return 0;
}*/
