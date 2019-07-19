/*************************************************************************
	> File Name: 1062aa.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Apr 2019 06:36:47 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        getchar ();
        while (n--) {
            string s;
            getline (cin, s);
            int i, j = 0;
            int duan = 0;
            for (i = 0; i < s.length(); i++) {
                if(s[i] == ' ') {
                    for (j = i - 1; j >= duan; j--) {
                        cout << s[j] ;
                    }
                    cout << ' ';
                    duan = i + 1;
                }
            }
            for (j = i - 1; j >= duan; j--) {
                cout << s[j] ;
            }
            cout << endl;
        }
    }
    return 0;
}
