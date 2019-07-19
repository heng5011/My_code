/*************************************************************************
	> File Name: E.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Apr 2019 10:46:36 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char a[1000][1000];
    int i, j, n, k;
    while(cin >> n && n) {
        for(i = 0; i < n; i++) {
            cin >> a[i];
        }
        /*string a[n];
        while(n--) {
            cin >> a[n];
        }*/
        int max = -1, sum;
        for(i = 0; i < n; i++) {
            sum = 0;
            for(j = i + 1; j < n; j++) {
                if(strcmp(a[i], a[j]) == 0) {
                    sum ++;
                }
                if(sum > max) {
                    max = sum;
                    k = i;
                }
            }
        }
        cout << a[k] <<endl;
    }
    return 0;
}
