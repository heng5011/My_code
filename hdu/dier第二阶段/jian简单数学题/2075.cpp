/*************************************************************************
	> File Name: 2075.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月30日 星期四 18时08分56秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    while (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            int flag = 0;
            if (a % b == 0) {
                flag = 1;
            }
            cout << (flag ? "YES" : "NO") << endl;
            //flag ? (cout << "YES" << endl) : (cout << "NO" << endl);
        }
    }
    return 0;
}
