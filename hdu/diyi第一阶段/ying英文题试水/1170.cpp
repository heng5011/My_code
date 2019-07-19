/*************************************************************************
	> File Name: 1170.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Apr 2019 07:49:51 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int a, b;
    char s;
    cin >> n;
    while(n--) {
        cin >> s >> a >> b;
        switch(s) {
            case '+' : cout << a + b <<endl; break;
            case '-' : cout << a - b <<endl; break;
            case '*' : cout << a * b <<endl; break;
            case '/' : if((a % b) == 0) cout << a / b << endl;
                            else cout << setiosflags(ios::fixed) << setprecision(2) << a * 1.0 / b <<endl;
                        break;
        }
        /*if(s == '/' && a % b != 0) {
            cout << setiosflags(ios::fixed) << setprecision(2) << a / (1.0 * b) <<endl;
        } else if(s == '/' && a % b == 0) {
            cout << a / b <<endl;
        }*/
    }
    return 0;
}
