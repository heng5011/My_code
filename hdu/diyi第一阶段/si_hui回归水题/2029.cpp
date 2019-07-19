/*************************************************************************
	> File Name: 2029.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 18时45分35秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[100];

int main () {
    int n;
   // cin >> n;
    while (cin >> n) {
        while (n--) {
            cin >> s;
            int flag;// = 1;
            for (int i = 0; i < strlen(s) / 2; i++) {
                /*if (s[i] != s[strlen(s) - i - 1]) {
                    flag = 0;
                    break;
                }*/
                (s[i] != s[strlen(s) - i - 1]) ? (flag = 0) : (flag = 1);
            }
            (flag) ? (cout << "yes" << endl) : (cout << "no" << endl);
        }
    }
    return 0;
}


/*string s;

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        int flag;
        for (int i = 0; i < s.length() / 2; i++) {
            s[i] != s[s.length() - i - 1] ? (flag = 0) : (flag = 1);
        }
        (flag) ? (cout << "yes" << endl) : (cout << "no" << endl);
    }
    return 0;
}
*/
