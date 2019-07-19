/*************************************************************************
	> File Name: p1089.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 09 Apr 2019 08:05:37 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int money, cost, mom, flag = 1, death;
int main() {
 //   int money, cost, mom, flag = 1, death;
    for(int i = 1; i <= 12; i++) {
        money += 300;
        cin>>cost;
        money -= cost;
        if(money < 0) {
            flag = 0;
            death = i;
            break;
        }
            mom += money / 100;
            money %= 100;
    }
        if(flag == 1) {
            money += mom * 120;
            cout<<money;
        } else {
            cout<<-death;
        }
    return 0;
}
