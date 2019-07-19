/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Apr 2019 05:16:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    char a[100];
    int i = 0, j = 0;
    printf("intput:");
    fgets(a, 100, stdin);
    for(i = 0; *(a + i) != '\0'; i++) {
        if(*(a + i) != ' ') {
            a[j++] = a[i];
        }
    }
        a[j] = '\0';
        printf("output:");
        fputs(a, stdout);
    return 0;
}
