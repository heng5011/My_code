/*************************************************************************
	> File Name: 2021.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月08日 星期三 19时33分54秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int bill[] = {100, 50, 10, 5, 2, 1};
int bill_n = sizeof(bill) / sizeof(int);

int main() {
    int n;
    while (cin >> n && n) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int money;
            cin >> money;
            for (int i = 0; i < bill_n && bill; i++) {
                ans += money / bill[i];
                money %= bill[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
