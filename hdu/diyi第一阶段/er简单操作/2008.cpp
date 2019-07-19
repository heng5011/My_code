/*************************************************************************
	> File Name: 2008.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Apr 2019 07:59:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n, time1, time2, time3;
    double a;
    while(cin >> n && n != 0) {
        time1 = time2 = time3 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == 0) {
                time2++;
            } else if(a < 0) {
                time1++;
            } else {
                time3++;
            }  
        } 
        cout<< time1 <<' '<< time2 <<' ' << time3 <<endl;
    }
    /*while(n-- && n != 0) {  
        cin >> a;
        if(a == 0) {
            time2++;
        } else if(a < 0) {
            time1++;
        } else {
            time3++;
        }  
    } 
        cout<< time1 <<' '<< time2 <<' ' << time3 <<endl;*/
    return 0;
}
