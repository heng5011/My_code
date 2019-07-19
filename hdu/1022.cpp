/*************************************************************************
	> File Name: 1022.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Apr 2019 10:15:40 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
const int maxn = 1e4;

stack<char> s;
char a[maxn], b[maxn];
char ch[maxn][4];

int main() {
   int n;
    while(cin >> n) {
        cin >> a;
        cin >> b;
        while(!s.empty()) {
            s.pop();
        }
        int num = 0;
        int coun = 0;
        for(int i = 0; i < n; i++) {
            s.push(a[i]);
            strcpy(ch[coun++], "in");
            while(!s.empty()) {
                if(num < n && s.top() == b[num]) {
                    s.pop();
                    num++;
                    strcpy(ch[coun++], "out");
                } else {
                    break;
                }
            }
        }
        if(!s.empty()) {
            cout<<"No."<<endl;
        } else {
            cout << "Yes."<<endl;
            for(int i = 0; i < coun;i++) {
                puts(ch[i]);
            }
        }
            cout << "FINISH"<<endl;
             for(int i = 0; i < 10000; i++) {
                strcpy(ch[i], " ");
            }
    }
    printf("%.6f\n",(double)clock() / CLOCKS_PER_SEC);
    return 0;
}
