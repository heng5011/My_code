/*************************************************************************
	> File Name: G.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 13时03分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0 && n != 0) {
        cout << "qiandaochenggong" << endl;
    } else {
        cout << "qiandaoshibai" << endl;
    }
    return 0;
}
