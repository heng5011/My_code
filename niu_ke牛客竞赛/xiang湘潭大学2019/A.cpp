/*************************************************************************
	> File Name: A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 18时33分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n[5] = {0};
int p[5] = {0};
int s[5] = {0};

int main () {
    int first ();
    cin >> n[0] >> p[0] >> s[0];
    cin >> n[1] >> p[1] >> s[1];
    int tmp = first ();
    if (tmp == -1) {
        puts ("God");
    } else if (tmp == 1) {
        cout << '1' << endl;
    } else {
        cout << '2' << endl;
    }
    return 0;
} 

int first () {
    if (n[0] == n [1]) {
        if (p[0] == p[1]) {
            if (s[0] == s[1]) {
                return -1;
            }
            return s[0] < s[1];
        }
        return p[0] < p[1];
    }
    return n[0] > n[1];
}
