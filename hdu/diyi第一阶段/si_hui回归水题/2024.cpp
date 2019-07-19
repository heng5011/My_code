/*************************************************************************
	> File Name: 2024.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 18时28分34秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
            //getchar();
            cin.ignore();
        while (n--) {
            string s;
            getline(cin, s);
            int flag = 0;
            if ((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_') {
                for (int i = 1; i < s.size(); i++) {
                    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '_' || (s[i] >= '0' && s[i] <= '9')) {
                        flag = 1;
                    } else {
                       flag = 0;
                        break;
                    }
                }
            }
            flag ? (cout << "yes" << endl) : (cout << "no" << endl);
        }
    }
    return 0;
}
