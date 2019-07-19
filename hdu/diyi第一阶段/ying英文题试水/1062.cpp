/*************************************************************************
	> File Name: 1062.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Apr 2019 08:40:12 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int t, i;
    while(cin >> t) {
        getchar();
        while (t--) {
            string s;
            int j = 0;
            //cin >> s; 
            getline (cin, s);
            int len = s.length();
            int cuan = 0;
            for (i = 0;  i < len; i++) {
                if(s[i] == ' ') {
                    for(j = i - 1; j >= cuan; j--) {
                        cout << s[j];
                    }
                    cout << " ";
                    cuan = i + 1;
                }
            }
            for(j = i - 1; j >= cuan; j--) {
                cout << s[j] ;
            }
            cout << endl;
        }
    }
    return 0;
}





/*#include<iostream>
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
}*/
