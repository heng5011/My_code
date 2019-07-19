/*************************************************************************
	> File Name: 2629.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 24 Apr 2019 10:47:19 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        string temp;
        cin >> s;
        string str = s.substr(0, 2); // 截取s的前两个字符串
        int len = atoi(str.c_str()); //将字符串转换成一个整数值
        //cout << len <<endl;
        switch(len) {
            case 33 : temp = "Zhejiang"; break;
            case 11 : temp = "Beijing"; break;
            case 71 : temp = "Taiwan"; break;
            case 81 : temp = "Hong Kong"; break;
            case 82 : temp = "Macao"; break;
            case 54 : temp = "Tibet"; break;
            case 21 : temp = "Liaoning"; break;
            case 31 : temp = "Shanghai"; break;
        }
        string year = s.substr(6, 4);
        string month = s.substr(10,2);
        string days = s.substr(12, 2);
        cout << "He/She is from " << temp << ",and his/her birthday is on " << month << "," << days << "," << year << " based on the table." <<endl;
    }
    return 0;
}
