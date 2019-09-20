/*************************************************************************
	> File Name: 1071抛物线面积.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年09月19日 星期四 19时47分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*抛物线公式y = a (x - b) ^ 2 + c, */
double a, b, c, d, k, x1, y1, x2, y2, x3, y3;

double fun (int x) { //积分求面积,上减下
    return (1 / 3.0) * a * x * x * x - (1 / 2.0) * (2 * a * b + k) * x * x + (a * b * b + c - d) * x;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        b = x1;
        c = y1;
        a = (y2 - y1) / ((x2 - x1) * (x2 - x1)); //用y1算，把 b 换成 x1, 正好构成完全平方
        //a = (y2 - y1) / (x2 - x1) / (x2 - x1);
        k = (y3 - y2) / (x3 - x2);
        //d = y2 - x2 * k; //直线与 y 轴的截距为 d, 相当于x2 * tan_0;
        d = y3 - x3 * k;
        //cout << a << endl;
        cout << setiosflags (ios::fixed) << setprecision(2) << fun (x3) - fun (x2) << endl;
    }
    
    return 0;
}
