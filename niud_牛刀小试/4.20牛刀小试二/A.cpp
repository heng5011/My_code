/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Apr 2019 03:30:07 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
char s[50];

int main() {
    int n;
    cin >> n;
    while(n--) {
        int ans = 0, score = 0;
        cin >> s;
        for(int i = 0; i < strlen(s); i++ ) {
            if(s[i] == 'O') {
                score += 1;
            } else {
                score = 0;
            }
            ans += score;
        }
        cout << ans <<endl;
    }
    return 0;
}
