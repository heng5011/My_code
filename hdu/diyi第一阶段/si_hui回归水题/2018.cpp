/*************************************************************************
	> File Name: 2018.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 12时24分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

//递归
/*int main() {
    int cow(int n);
    int n;
    while (cin >> n && n) {
        cout << cow (n) << endl;
    }
    return 0;
}

int cow(int n) {
    if (n <= 4) {
        return n;
    } else {
        return cow(n - 1) + cow(n - 3);
    }
}*/

//记忆化

int year[60] = {0};

int main() {
    int cow (int n);
    int n;
    for (int i = 1; i < 4; i++) {
        year[i] = i;
    }
    while (cin >> n && n) {
        cout << cow(n) << endl;
    }
    return 0;
}

int cow (int n) {
    if(year[n] > 0) {
        return year[n];
    } else {
        return year[n] = cow(n - 3) + cow(n - 1);
    }
}

//数组
/*int num[60] = {0};

int main() {
    int n;
    while (cin >> n && n) {
        num[1] = 1;
        num[2] = 2;
        num[3] = 3;
        num[4] = 4;
        for (int i = 5; i < 56; i++) {
            num[i] = num[i - 1] + num[i - 3];
        }
        cout << num[n] <<endl;
    }
    return 0;
} */

//迭代
/*int main() {
    int n;
    int f1, f2, f3, f4, fn;
    while (cin >> n && n) {
        f1 = 1;
        f2 = 2;
        f3 = 3;
        f4 = 4;
        if(n == 1) {
            cout << f1 << endl;
        } else if (n == 2) {
            cout << f2 << endl;
        } else if (n == 3) {
            cout << f3 << endl;
        } else if (n == 4) {
            cout << f4 << endl;
        } else {
            for(int i = 4; i < n + 1; i++) {
                fn = f3 + f1;
                f1 = f2;
                f2 = f3;
                f3 = fn;
            }
        cout << fn << endl;
        }
    }
    return 0;
}*/

