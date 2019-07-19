/*************************************************************************
	> File Name: E1.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 20时12分06秒
 ************************************************************************/

/*字典树*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 300005;
string s[30005], ans[30005];
int tree[maxn][27], val[maxn], tot = 0, n;

void insert(string s) {
    int len = s.size(), p = 0;
    for (int i = 0; i < len; i++) {
        int x = s[i] - 'a';
        if (tree[p][x] == 0) {
            tree[p][x] = ++tot;
        }
        p = tree[p][x];
    }
    val[p] = 1;
}

int du[27];
vector <int> g[27];

bool top_sort() {
    queue <int> q;
    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (!du[i]) {
            q.push(i);
            res |= (1 << i);
        }
    }
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i  =0 ; i < g[u].size(); i++) {
            int v = g[u][i];
            du[v]--;
            if (!du[v]) {
                q.push(v);
                res |= (1 << v);
            }
        }
    }
    return res == ((1 << 26) - 1);
}
bool check (string s) {
    int len = s.size(), p = 0;
    memset(du, 0, sizeof(du));
    for (int i = 0; i < 26; i++) {
        g[i].clear();
    }
    for (int i = 0 ; i < len; i++) {
        int x = s[i] - 'a';
        for (int y = 0; y < 26; y++) {
            if (tree[p][y] && y != x) {
                du[y]++;
                g[x].push_back(y);
                g[y].push_back(x);
            }
        }
        if (val[p]) return 0;
        p = tree[p][x];
    }
    return top_sort();
}

int main() {
    scanf("%d", &n);
    //cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        insert(s[i]);
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (check(s[i])) {
            ans[++res] = s[i];
        }
    }
    printf ("%d\n", res);
    //cout << res << endl;
    for (int i = 1; i <= res; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
