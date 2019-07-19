/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月12日 星期日 14时20分16秒
 ************************************************************************/

/*#include <iostream>
#include <algorithm>
using namespace std;

int a[10005] = {0};

int main() {
    int n;
    while (cin >> n && n) {
        while (n--) {
            for (int i =0 ;i < 6; i++) {
                cin >> a[i];
            }
            sort(a, a + 6);
            for (int i = 0; i < 6; ++i) {
                if (a[0] == a[1]) {
                    cout << a[5] << endl; break;
                } else {
                    cout << a[0] << endl; break;
                }
            }
        }
    }
    return 0;
}
*/

/***********************************************/
/*开辟一个位置标记数组　并对该元素计数，　若该位置元素为１，　则为所求答案*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int a[105];

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        int n;
        for (int i = 0; i < 6; i++) {
            cin >> n;
            a[n]++;//计数
        }
        for (int i = 1; i < 101; i++) {
            if (a[i] == 1) {
                cout << i << endl; //i为第几个数
                break;
            }
        }
    }
    return 0;
}

