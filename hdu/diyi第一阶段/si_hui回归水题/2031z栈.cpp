/*************************************************************************
	> File Name: 2031栈.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月10日 星期五 20时00分17秒
 ************************************************************************/

#include <iostream>
#include <stack>

char b[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

using namespace std;

stack <char> s;

int main() {
    int n, x;
    while (cin >> n >> x && x) {
        if (n < 0) {
            cout << "-";
            n = -n;
        }
        while (n) {
            s.push(b[n % x]);
            n /= x;
        }
        int num = s.size();
        for (int i = 0; i < num; i++) {
            cout << s.top() ;
            s.pop();
        }
        cout << endl;
    }
    return 0;
}
