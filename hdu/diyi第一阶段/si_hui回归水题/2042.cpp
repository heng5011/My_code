/*************************************************************************
	> File Name: 2042.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 19时36分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*递推   2013*/
/*
 f1 = 3;
 f2 / 2 + 1 = f1 ---- f2 = 2 * (f1 - 1)
 fn = 2 * (fn-1  - 1)
*/

int main() {
    int n;
    cin >> n;
    while (n--) {
        int ans = 3, charge;
        cin >> charge;
        for (int i = 0; i < charge; i++) {
            ans = 2 * (ans - 1);
        }
        cout << ans << endl;
    }
    return 0;
}
