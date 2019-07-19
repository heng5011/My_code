/*************************************************************************
	> File Name: C.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 19时29分34秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
using namespace std;
//#include<bits/stdc++.h>

const int maxn = 1e5 + 10;
typedef long long ll;

int vis[maxn];
int lazy[maxn * 4], mx[maxn * 4], mn[maxn * 4];
 
void pushdown(int id, int l, int r) {
	if(lazy[id]) {
		mx[id] = mn[id] = lazy[id];
		if(l != r) {
			lazy[id << 1|1] = lazy[id << 1] = lazy[id];
			mx[id << 1] = mx[id << 1|1] = lazy[id];
			mn[id << 1] = mn[id << 1|1] = lazy[id];
		}
		lazy[id] = 0;
	}
}
void update(int id, int l, int r, int ql, int qr, int v) {
	pushdown(id, l, r);
	if(ql <= l && r <= qr && mx[id] == mn[id]) {
		vis[mx[id]] -= (r - l + 1);
		vis[v] += (r - l + 1);
		lazy[id] = v;
		pushdown(id, l, r);
		return ;
	}
	int mid = (l + r) >> 1;
	if(ql <= mid) update(id << 1, l, mid, ql, qr, v);
	if(qr > mid) update(id << 1|1, mid + 1, r, ql, qr, v);
	mx[id] = max(mx[id << 1], mx[id << 1|1]);
	mn[id] = min(mn[id << 1], mn[id << 1|1]);
}
int main() {
	int n, c, q, x, y;
	ll a, b;
    cin >> n >> c >> q;
	vis[1] = n;
	lazy[1] = 1;
	while(q--) {
        cin >> x >> y >> a >> b;
		int p = vis[x];
		int l = (a + (p + b) % n * (p + b) % n) % n + 1;
		int r = (a + p * b % n * p % n * b % n) % n + 1;
		if(l > r) swap(l, r);
		update(1, 1, n, l, r, y);
    }
	int ans = 0;
    for(int i = 1; i <= c; i++) {
        ans = max(ans, vis[i]);
    }
    cout << ans << endl;
}
