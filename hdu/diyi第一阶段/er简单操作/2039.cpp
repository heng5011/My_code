/*************************************************************************
	> File Name: 2039.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Apr 2019 06:42:24 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int arr[5] = {0};

int main() {
    int m;
    cin >> m;
    while(m--) {
        /*for(int i = 0; i < 3; i++) { //题目说是正数，　但是没说是　整　数
            cin >> arr[i];
            if(arr[i] <= 0) return 0;
        }
        sort(arr, arr + 2);
        if(arr[0] + arr[1] > arr[2]) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }*/
        double a, b, c;
        cin >> a >> b >>c;
        if(a + b > c && a + c > b && b + c > a) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
