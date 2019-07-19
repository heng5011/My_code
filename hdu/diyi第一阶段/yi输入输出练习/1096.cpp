/*************************************************************************
	> File Name: 1096.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Apr 2019 07:17:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a, sum = 0;
        cin >> a;
        while(a--) {
            int i;
            cin >> i;
            sum += i; 
        }
        cout << sum <<endl;
        if(n != 0) {
            cout<<endl;
        }
    }
    return 0;
}
