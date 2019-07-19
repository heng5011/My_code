/*************************************************************************
	> File Name: 2022.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月24日 星期五 21时23分37秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    int val, max, maxi, maxj;
    while (cin >> m >> n) {
        maxi = maxj = max = 0;
        /*int maxi = 0;
        int maxj = 0;
        int max = 0;
        int val;*/
        for (int i = 0; i < m; i++) {
            for (int j = 0; i < n; j++) {
                cin >> val;
                if (abs(val) > abs(max)) {
                    max = val;
                    maxi = i + 1;
                    maxj = j + 1;
                }
            }
        }
        cout << maxi << ' ' << maxj << ' ' << max << endl;
    }
    return 0;
}

/*#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void)
{
    int m, n;
    int val, max, maxi, maxj;

    while(cin >> m >> n) {
        maxi = maxj = max = 0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                cin >> val;
                //scanf("%d", &val);
                if(abs(val) > abs(max)) {
                    max = val;
                    maxi = i + 1;
                    maxj = j + 1;
                }
            }
        }
        cout << maxi << ' ' << maxj << ' ' << max << endl;
    }

    return 0;
}*/
