/*************************************************************************
	> File Name: p1422.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 17时08分18秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;
int main() { 
    double n;
    cin>>n; 
    if(n <= 150) {
        cout<<setprecision(1)<<fixed<<n * 0.4463<<endl;
    } else if(n >= 151 && n <= 400) {
        cout<<setprecision(1)<<fixed<<(n - 150) * 0.4663 + 150 * 0.4463<<endl;
    } else {
        cout<<setprecision(1)<<fixed<<(n - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
    }
    return 0;
}
