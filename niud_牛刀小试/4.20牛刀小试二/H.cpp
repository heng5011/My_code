/*************************************************************************
	> File Name: H.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Apr 2019 08:31:12 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int num[10005] = {0};
int a[10005] = {0};

int main() {
    int n;
    int i, j, temp;
    num[0] = num[1] = 1;
    while(cin >> n) {
        for(i = 2; i <= n; i++) {
            int t = 0;
            for(j = 0; j <= num[0]; j++) {
                temp = num[j] * i + t;
                num[j] = temp % 10;
                t /= 10;
            }
            while(t) {
                num[num[0]] = t % 10;
                t = t / 10;
                num[0]++;
            }
            /*for(j = 1; j <= num[0]; j++) {
                if(num[j] < 10) {
                    continue;
                } else {
                    num[i + 1] += num[i] / 10;
                    num[i] %= 10;
                    num[0] += (j == num[0]);
                }
            }*/
        } 
        for(int i = num[0]; i > 0; i--) {
            cout << num[i] << endl;
        }
    }
    return 0;
}
