/*************************************************************************
	> File Name: 2734.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Apr 2019 07:26:22 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[0] == '#') return 0;
            if(s[i] != ' ') {
                sum += (s[i] - 'A' + 1) * (i + 1);
            }
        }
            cout << sum << endl;
    }
    return 0;
}
