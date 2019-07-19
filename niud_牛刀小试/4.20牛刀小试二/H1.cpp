/*************************************************************************
	> File Name: H1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Apr 2019 10:06:12 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int a[50005] = {0};
int k;

int main() {
   // int a[50005] = {0};
   // int k;
    int n, t, i, j;
    while ( cin >> t ) {
        if(t == 0 || t == 1) cout << "1" <<endl;
        else {
        k = a[0] = 1;
        int num = 0;
        for(i = 2; i <= t; i++) {
            for(j = 0; j < k; j++) {
                a[j] = a[j] * i + num % 10;
                num = a[j] / 10 + num / 10;
                a[j] = a[j] % 10;
            }
            while( num != 0 ) {
                a[j++] = num % 10;
                num /= 10;
                k++;
            }
        }
        for(i = k - 1; i >= 0; i--) {
            cout << a[i] ;
        } 
        cout << endl;
    }
    }
    return 0;
}
