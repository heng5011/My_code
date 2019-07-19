/*************************************************************************
	> File Name: 2025.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月08日 星期三 19时57分20秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

char s[105] = {0};

int main() {
    while (cin >> s) {
        char flag = s[0];
        for (int i = 0; i < strlen(s); i++) {
            if (flag < s[i]) {
                flag = s[i];
            }
        }
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == flag) {
                cout << s[i] << "(max)" ;
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
