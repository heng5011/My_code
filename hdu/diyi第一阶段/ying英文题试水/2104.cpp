/*************************************************************************
	> File Name: 2104.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Apr 2019 08:32:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n && m + n != -2) {
        int t;
        while(n != 0 && n != 1) {
            t = m % n;
            m = n;
            n = t;
        }
        if(n) cout << "YES" <<endl;
         else cout << "POOR Haha" <<endl;
    }
    return 0;
}

/*int gcb(int m, int n) {
    if(n == 0) return m;
    else return gcb(n, m % n);
}

int main() {
    int m, n;
    while(cin >> m >> n && m + n != -2) {
        if(gcb(m, n) == 1) {
            cout << "YES" <<endl;
        } else {
            cout << "POOR Haha" <<endl;
        }
    }
    return 0;
}*/
