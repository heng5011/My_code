/*************************************************************************
	> File Name: 1312.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Apr 2019 11:22:05 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>

using namespace std;

#define MAX_N 25

int direction[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int vis[MAX_N][MAX_N] = {0};
char arr[MAX_N][MAX_N] = {0};
int m, n, ans = 0;

void DFS(int x, int y) {
    vis[x][y] = 1;
    for(int i = 0; i < 4; i++) {
        int Now_x = x + direction[i][0];
        int Now_y = y + direction[i][1];
        if(Now_x >= 0 && Now_y >= 0 && Now_x < m && Now_y < n && !vis[Now_x][Now_y] && arr[Now_x][Now_y] == '.') {
            ans++;
            DFS(Now_x, Now_y);
        }
    }
    return ;
}

int main() {
    int x, y;
    while(cin >> n >> m && n && m) {
        memset(vis, 0, sizeof(vis));
        ans = 1;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
                if(arr[i][j] == '@') {
                    x = i;
                    y = j;
                }
            }
        }
        DFS(x, y);
        cout << ans <<endl;
    }
    return 0;
}
