/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 15时34分38秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include<stdio.h>
int main() {
    int max = 0, count = 1,n = 7;
    int b, c;
    int a[] = { 2,1,4,7,8,-1,20 };
    for (int i = 0; i < n; i++) {
        b = a[i];
        for (int j = i + 1; j < n; j++) {
            if (b < a[j]) {
                b = a[j];
                count++;
            }
            else break;
        }
        if (max < count) {
            max = count;
            c = i;
        }
        count = 1;
    }
    printf("%d ",a[c]);
    b = a[c];
    for (int i = c + 1; i < n; i++) {
        if (b < a[i]) {
            b = a[i];
            printf("%d ", b);
        }
        else break;
    }
    return 0;
}


