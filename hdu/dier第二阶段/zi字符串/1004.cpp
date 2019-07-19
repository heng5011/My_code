/*************************************************************************
	> File Name: 1004.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月11日 星期二 19时18分12秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;

int main() {
    int n;
    map <string, int> color;
    string s, ans;
    while (cin >> n && n) {
        int max = 0;
        while (n--) {
            cin >> s;
            color[s]++;
            if (color[s] > max) {
                ans = s;
                max = color[s];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
