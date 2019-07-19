/*************************************************************************
	> File Name: 2026.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月10日 星期五 19时30分59秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        s[0] -= 32;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                s[i + 1] -= 32;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            cout << s[i] ;
        }
        cout << endl;
    }
    return 0;
}
