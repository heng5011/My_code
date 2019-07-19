/*************************************************************************
	> File Name: 2031.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月09日 星期四 19时52分24秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

char ans[105] = {0};
char b[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main () {
    int n, x, t2;
    while (cin >> n >> x && x) {
        if (n < 0) {
            n = -n;
            cout << "-";
        }
        int i = 0;
        while (n) {
            //int t = n % x;
            ans[i++] = b[(n % x)];
            n /= x;
            //ans[i++] = b[(n % x)];
        }
        ans[i] = '\0'; //ans[i] = 0;
        /*for (int i = strlen(ans) - 1; i > 0; i--) {
            cout << ans[i];
        }
        cout << ans[0] << endl;*/
        for (int i = strlen(ans) - 1; i >= 0; i--) {
            /*if(i < strlen(ans) - 1) {
                cout << ' ';
            }*/
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
