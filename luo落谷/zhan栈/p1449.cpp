/*************************************************************************
	> File Name: p1449.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Apr 2019 06:00:02 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> stack1;
    string s;
    cin >> s;
    int i = 0;
    while(s[i] != '@') {
        if(s[i] <= '9' && s[i] >= '0') {
            int num = 0;
            while(s[i] != '.') {
                num = num * 10 + s[i] - '0';
                i++;
            }
            stack1.push(num);
        } else {
            int a = stack1.top();
            stack1.pop();
            int b = stack1.top();
            stack1.pop();
            int temp;
            switch(s[i]) {
                case '+': temp = a + b; break;
                case '-': temp = b - a; break;
                case '*': temp = a * b; break;
                case '/': temp = b / a; break;
                //stack1.push(temp);
            }
            stack1.push(temp);
        }
        i++;
    }
    cout<<stack1.top()<<endl;
    return 0;
}
