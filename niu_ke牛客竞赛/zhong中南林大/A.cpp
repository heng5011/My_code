/*************************************************************************
	> File Name: A.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 18时31分34秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a[10005] = {0};

int main() {
    for (int i = 0; i < 30; i++) {
        cin >> a[i];
    }
    sort(a, a + 30);
    for (int i = 0; i < 30; i++) {
        if (i != 29) {
            cout << a[i] << ' ';
        } else {
            cout << a[i] << endl;
        }
    }
    return 0;
}
