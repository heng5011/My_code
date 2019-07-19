/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 20时37分55秒
 ************************************************************************/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
public class CMath {
    private CMath() {}

    public static double binomial(int n, int k, double p) {
        return c(n, k) * Math.pow(p, k) * Math.pow(1 - p, n - k);
    }

    // Calculate combination
    private static int c(int n, int k) {
        if (n - k == 1)
            return n;
        return c(n - 1, k) * n / (n - k);
    }
}

