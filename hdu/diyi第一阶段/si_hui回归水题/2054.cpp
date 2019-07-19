/*************************************************************************
	> File Name: 2054.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月29日 星期三 18时56分28秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

void f(string &s) {
    int flag = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            flag = 1;
            break;
        }
    }
    int t = s.length() - 1;
    if (flag) {
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                //s[i] = '\0';
                s.erase(s.end() - 1);
            } else {
               break; 
            }
            t--;
        }
    }
    if (s[t] == '.' ) {
        //s[t] = '\0';
        s.erase(s.end() - 1);
    }
    //cout << t << endl;
   // cout << s << endl;
}

int main() {
    string a, b;
    while(cin >> a >> b) {
        f(a);
        f(b);
        //cout << a.length() << " " << a << endl;
        //cout << b.length() << " " << b << endl;
        (a == b) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
    return 0;
}

/*#include <cmath>

int main() {
    double a, b;
    while (cin >> a >> b) {
        cout << (fabs(a - b) < 1e-7 ? "YES" : "NO") << endl;
    }
    return 0;
}*/
