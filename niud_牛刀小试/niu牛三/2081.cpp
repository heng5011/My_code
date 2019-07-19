/*************************************************************************
	> File Name: H.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时37分55秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string b = s.substr(6, 11);
        cout<< "6" << b << endl;

    }
    return 0;
}
