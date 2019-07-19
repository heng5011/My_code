/*************************************************************************
	> File Name: 1873.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Apr 2019 03:48:29 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

struct Node {
    int value, ID;
    Node() {
        
    } //构造函数
    Node(int a, int b) {
        value = a;
        ID = b;
    }
    bool operator<(const Node node) const {
        if (value == node.value) {
            return ID > node.ID;
        }
        return value < node.value;
    }
};

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int num = 0;
        priority_queue<Node> q[12];
        for(int i = 0; i < n; i++) {
            string str;
            int a, b;
            cin >> str >> a;
            if(str == "IN") {
                cin >> b;
                q[a].push(Node(b, ++num));
            } else {
                if(q[a].empty()) {
                    cout << "EMPTY" << endl;
                } else {
                    cout << q[a].top().ID << endl;
                    q[a].pop();
                }
            }
        }
    }
    return 0;
}
