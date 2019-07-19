/*************************************************************************
	> File Name: p1085.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 21时38分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b, i, sum = 0, t = 0, max = 0;
    //cin>>a>>b;
    for(i = 1; i < 8; ++i) {
        cin>>a>>b;
        sum = a + b;
        if((sum > max) && sum > 8) {
            max = sum;
            t = i;
            //cout<< i <<endl; break;
        } //else {
            //cout<< t <<endl;
        }
    cout<<t<<endl;
   // }
    return 0;
}
