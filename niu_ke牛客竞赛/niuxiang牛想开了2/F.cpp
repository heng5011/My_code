/*************************************************************************
	> File Name: F1.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 20时44分48秒
 ************************************************************************/

/*线段树*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define mk make_pair
typedef long long ll;
typedef pair<int,int> PII;

const int N = 2e5 + 10;
const int M = 5e5 + 10;
 
typedef struct point {
    int first;
    int second;
    int id;
    friend bool operator< (point a, point b) {
        return a.first < b.first;
    }
 
} point;
 
point node[N];
 
int n, m, kk;
 
int a[N], sz[N];
 
int vis[N];
vector <int> edge[N];
 
int fa[N];
 
int k[N];
 
int Btree[4 * N];
 
map <int, int> mp[N];
 
int ans[M], val[N];
 
typedef struct query {
    int v;
    int l, r;
    int id;
} query;
 
query mq[M];
 
int findfa (int x) {
    if(x == fa[x]) return x;
    int nex = fa[x];
    fa[x] = findfa (nex);
    return fa[x];
}
 
bool cmp (query a, query b) {
    return a.v < b.v;
}
 
bool cmpk (int a, int b) {
    return findfa (a) < findfa (b);
}
 
void build (int l, int r, int root) {
    if(l > r) return;
    if(l == r) {
        Btree[root] = 0;
        return ;
    }
    int mid = (l + r) / 2;
    build (l, mid, root * 2);
    build (mid + 1, r, root * 2 + 1);
    Btree[root] = max (Btree[root * 2], Btree[root * 2 + 1]);
}
 
 
void updateone (int root, int l, int r, int index, int val) {
    if(l > r) return;
    if(l == r) {
        if(l == index)
            Btree[root] += val;
        return ;
    }
    int mid = (l + r) / 2;
    if (index <= mid) {
        updateone (root * 2, l, mid, index, val);
    } else {
        updateone (root * 2 + 1, mid + 1, r, index, val);
    }
    Btree[root] = max (Btree[2 * root], Btree[2 * root + 1]);
}
 
int query_max(int root, int s1, int e1, int s2, int e2) {
    if (e1 < s2 || s1 > e2)
        return 0;
    if (s1 > e1) return 0;
    if (s1 >= s2 && e1 <= e2) {
        return Btree[root];
    }
 
    int mid = (s1 + e1) / 2;
    int lm = 0, rm = 0;
    if (s2 <= mid) lm = query_max (root * 2, s1, mid, s2, e2);
    if(mid + 1 <= e2) rm = query_max (root * 2 + 1, mid + 1, e1, s2, e2);
    return max (lm, rm);
}
 
void combine (int u, int v) {
    if(sz[u] < sz[v]) swap (u, v);
    sz[u] += sz[v];
    sz[v] = 0;
    fa[v] = u;
    int past = val[u];
    for (auto s : mp[v]) {
        int su = 0;
        if (mp[u].count (s.first)) {
            su = mp[u][s.first];
            if(!su) val[u] -= 1;
        }
        su = (su + s.second) % kk;
        if(!su) val[u] += 1;
        mp[u][s.first] = su;
    }
    updateone (1, 1, n, u, val[u] - past);
    updateone(1, 1, n, v, -val[v]);
    val[v] = 0;
}
 
void cal (int x) {
    vis[x] = 1;
    updateone(1, 1, n, x, val[x]);
    for (auto s : edge[x]) {
        if (vis[s]){
            int fx = findfa(x);
            int fy = findfa(s);
            if(fx != fy) combine(fx, fy);
        }
    }
}
 
int main() {
    scanf("%d%d%d", &n, &m, &kk);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &node[i].first);
        fa[i] = i;
        node[i].id = i;
        vis[i] = 0;
        sz[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &node[i].second);
        mp[i][node[i].second] = 1 % kk;
        val[i] = (kk == 1 ? 1 : 0);
    }
    sort (node + 1, node + 1 + n);
    for (int i = 1; i <= n; i++) {
        a[i] = node[i].first;
    }
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int sz = n;
    build(1, sz, 1);
    int q, cnt;
    cnt = 0;
    scanf("%d", &q);
    for (int i = 1; i <= q; i++) {
        int tmp;
        scanf("%d%d", &mq[i].v,&tmp);
        mq[i].l = cnt;
        mq[i].r = cnt+tmp;
        mq[i].id = i;
        while (cnt < mq[i].r) {
            scanf("%d", &k[cnt]);
            cnt++;
        }
    }
    sort (mq+1, mq+1+q, cmp);
    int pre = 0;
    for (int i = 1; i <= q; i++) {
        int nxt = upper_bound (a + 1, a + 1 + n, mq[i].v) - a;
        for (int j = pre + 1; j < nxt; j++) {
            pre = j;
            cal (node[j].id);
        }
        sort(k + mq[i].l, k + mq[i].r, cmpk);
        int past = 1;
        int res = 0;
        for (int j = mq[i].l; j < mq[i].r; j++) {
            int w = findfa(k[j]);
            if (past < w) {
                res = max(res, query_max(1, 1, sz,past, w-1));
            }
            past = w + 1;
        }
        if (past < sz + 1) {
            res = max (res, query_max (1, 1, sz, past, sz));
        } 
        ans [mq[i].id] = res;
    }
    for (int i = 1; i <= q; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
