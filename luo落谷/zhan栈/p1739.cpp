/*************************************************************************
	> File Name: p1739.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Apr 2019 09:35:44 AM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str;
    cin >> str;
    stack<char> stack1;
    int i = 0, flag = 0;
    while(str[i] != 0) {
        if(str[i] == '(') {
            stack1.push(str[i]);
        }
            if (str[i] == ')') {
                if (stack1.empty()) {
                    flag = 1;
                    break;
                }
                stack1.pop(); //删除栈顶元素
            }
        i++;
    }
    if(flag) {
        cout<< "NO" <<endl;
    } else if(stack1.empty()) {
        cout<< "YES" <<endl;
    } else {
        cout <<"NO" << endl;
    }
    return 0;
}
