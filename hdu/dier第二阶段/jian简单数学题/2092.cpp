/*************************************************************************
	> File Name: 2092.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月03日 星期一 19时26分49秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m && (n + m)) {
        int flag = 0;
        for (int i = -10000; i < 10000; i++) {
            if ((n - i) * i == m) {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}
