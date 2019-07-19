/*************************************************************************
    > File Name: B.cpp
    > Author:
    > Mail:
    > Created Time: 2019年05月11日 星期六 14时33分28秒
 ************************************************************************/
 
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
 
int a[100005] = {0};
 
int main () {
    int n, m;
    cin >> n >> m;
    //while (cin >> n >> m) {
        int flag, l, r;
        for (int i = 1; i <= n; i++) {
            a[i] = i;
        }
        for (int i = 0; i < m; i++) {
            cin >> flag >> l >> r;
            if (flag == 1) {
                for (int i = l; i <= r; i++) {
                    a[i] = i - l + 1;
                }
                continue;
            }
            if (flag == 2) {
                int sum = 0;
                for (int i = 0; i <= r; i++) {
                    sum += a[i];
                }
                cout << sum << endl;
            }
        }
    //}
   // printf("%.5f\n", (double) clock() / CLOCKS_PER_SEC);
    return 0;
}
