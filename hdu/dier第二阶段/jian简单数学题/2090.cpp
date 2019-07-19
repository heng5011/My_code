/*************************************************************************
	> File Name: 2090.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月30日 星期四 19时22分13秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;

/*有缺陷！！！　没说输入的结束标志.*/
int main() {
    string s;
    double a, b;
    double sum = 0;
    while (cin >> s >> a >> b) {
        sum += a * b;
    }
    printf ("%.1f\n", sum);
    return 0;
}

