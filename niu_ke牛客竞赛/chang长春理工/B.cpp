/*************************************************************************
	> File Name: B.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月08日 星期六 23时36分53秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    double s1, s2;
    cin >> s1 >> s2;
    cout << 2 * s1 / (sqrt(s2 + 4 * s1) + sqrt(s2)) * 2 << endl; //直径得乘2
    //cout << (sqrt(4 * s1 + s2) - sqrt(s2)) / 2 * 2 << endl;
    return 0;
}
