/*************************************************************************
	> File Name: 2009.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Apr 2019 11:06:46 PM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double n;
    int m;
    while(cin >> n >> m) {
        double sum = 0;
        for(int i = 0; i < m; i++) {
            sum += n;
            n = sqrt(n); 
        }
    cout<< setiosflags(ios::fixed) << setprecision(2) << sum <<endl;
    }  
    //    printf("%.2f\n", sum);
    return 0;
}
