/*************************************************************************
	> File Name: p1996.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Apr 2019 06:42:37 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int main() {
    int tot, outnum, nownum = 1;
    queue<int>q;
    cin>> tot >> outnum;
    for(int i = 1; i <= tot; i++) {
        q.push(i);
    }
    while(!q.empty()) {
        if(nownum == outnum) {
            cout<< q.front() <<" ";
            q.pop();
            nownum = 1;
        } else {
            nownum++;
            q.push(q.front());
            q.pop();
        }
    }
    cout<<endl;
    return 0;
}
