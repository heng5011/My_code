/*************************************************************************
	> File Name: 2030.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月01日 星期三 13时58分17秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        cin.ignore();
        while (n--) {
            string s;
            getline(cin, s);
            int ans = 0; //for(int i = 0; i != '\0'; i++)
            for(int i = 0; i < s.length(); i++) {
                if((s[i] < 32) ||( s[i] > 126)) { //if(s[i] < 0)
                    ans++;
                }
            }
            cout << ans / 2  << endl;
        }
    }
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    getchar();
    while(n--) {
        int cnt = 0;
        char ch;

        for(;;) {
           if((ch = getchar()) == '\n')
               break;

           if(ch < 0)
               cnt++;
        }

        printf("%d\n", cnt / 2);
    }

    return 0;
}
*/
