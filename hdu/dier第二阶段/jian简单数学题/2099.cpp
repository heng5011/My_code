/*************************************************************************
	> File Name: C.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 11时16分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a, b, min;
    while (cin >> a >> b && a && b) {
        min = (b - a * 100 % b) % b;
        for (int i = min; i < 100; i += b) {
            if (i != min) {
                cout << " ";
            }
            printf ("%02d", i); //输出两位整数不足前面补零
            //cout << "0" << i << endl;
        }
        cout << endl;
    }
    return 0;
}
