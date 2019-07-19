/*************************************************************************
	> File Name: 2027.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月20日 星期一 19时52分52秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//char s[105] = {0};
int num[10] = {0};

int main() {
    int n;
    cin >> n;
    cin.ignore ();
    while (n--) {
        memset(num, 0, sizeof(num));
        //getchar ();
        string s;
  //      cin >>  s;
        //cin >> s;
        getline (cin, s);
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case 'a' : num[0]++; break;
                case 'e' : num[1]++; break;
                case 'i' : num[2]++; break;
                case 'o' : num[3]++; break;
                case 'u' : num[4]++; break;
            }
        }
        //if (n) {
            cout << "a:" << num[0] << endl;
            cout << "e:" << num[1] << endl;
            cout << "i:" << num[2] << endl;
            cout << "o:" << num[3] << endl;
            cout << "u:" << num[4] << endl;
        if (n) {
            cout << endl;
        }
    }
    return 0;
}
