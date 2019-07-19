/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 10时51分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
    int c;
    while (cin >> c) {
        for (int i = 0; i < c; i++) {
            string b;
            cin >> b;
            for (int i = 0; i < b.size(); i += 2) {
                cout << b[i + 1] << b[i];
            }
            cout << endl;
        }
    }
    return 0;
}
