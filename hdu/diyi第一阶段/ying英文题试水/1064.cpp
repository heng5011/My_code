/*************************************************************************
	> File Name: 1064.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Apr 2019 07:11:58 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int a[15] = {0};

int main() {
    int month = 12;
    double n;
    double sum = 0;
    while(month--) {
        cin >> n;
        sum += n;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << "$" << sum / 12<< endl;
    return 0;
}
