/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月21日 星期二 16时41分22秒
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> s;
    for (int i = 0; i < 5; i++) {
        s.push(i);
    }
    //int t = s.size();
    for (int i = 0; i < s.size(); i++) {
    int t = s.size();
        //cout << s.top() << endl;
        s.pop();
        cout << "栈长："<< t << endl;
        cout << "i = " << i << endl << endl;
    }
    return 0;
}

