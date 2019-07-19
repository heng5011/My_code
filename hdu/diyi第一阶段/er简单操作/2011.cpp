/*************************************************************************
	> File Name: 2011.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Apr 2019 10:53:34 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    int n, i, j, k;
    double x, y, z = 1.0;

    while(cin >> n)  {
        for(i = 0; i < n; i++) {
            cin >> j;
            for(k = 1; k <= j; k++) {
                y = 1.0 / k * z;
                x += y;
                z *= -1;
            }

            cout << setiosflags(ios::fixed) << setprecision(2) << x <<endl;
            x = 0;
            z = 1;
        }
    }
    return 0;
}
