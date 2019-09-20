/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 11时43分01秒
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;

int a[105] = {0};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf ("%d", &a[i]);
    }
    sort (a, a + n);
    int ans = 0;
    int left, right;
    for (int i = n - 1; i > 1; --i) {
        left = 0, right = i - 1;
        while (left < right) {
            if (a[left] + a[right] < a[i]) ++left;
            else if (a[left] + a[right] > a[i]) --right;
            else {
                ans++; break;
            }
        }
    }
    printf ("%d\n", ans);
    return 0;
}
