/*************************************************************************
	> File Name: D.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Apr 2019 09:01:13 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include "cstdio"
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int i = 0, t = 0; 
        char str[500];
        cin >> str;
        int len = strlen(str);
        for(i = 0; i < len; i++) { 
            if(str[i] >= '0' && str[i] <= '9') {
                t++;
            } 
        }
        cout << t <<endl; 
    }
    return 0;
}
