/*************************************************************************
	> File Name: L.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 14时20分23秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

/*int a[100005] = {0};
int b[100005] = {0};
int flag[100005] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[i - 1]) {
            flag[cnt++] = a[i];
        }
    }
    //cout << cnt << endl;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        //for (int j = 0; j < cnt; j++) {
            if (b[i] == flag[cnt++]) {
                ans++;
            } else {
                ans = 0;
                cnt = 0;
            }
        //}
       // cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}*/

#include <iostream>
#include <cstring>
using namespace std;
const int maxn=1e5+5;
int tree[maxn<<2],lazy[maxn<<2];
int n;
int a[maxn],head[maxn],nxt[maxn],num[maxn];
void pushdown(int rt,int son){
    tree[son]+=lazy[rt];
    lazy[son]+=lazy[rt];
}
void update(int L,int R,int l,int r,int k,int c){
    int mid=l+r>>1;
    if (L>r||R<l) return;
    if (L<=l&&R>=r){
        tree[k]+=c;
        lazy[k]+=c;
        return;
    }
    pushdown(k,k*2);
    pushdown(k,k*2+1);
    lazy[k]=0;
    update(L,R,l,mid,k*2,c);
    update(L,R,mid+1,r,k*2+1,c);
    tree[k]=max(tree[k*2],tree[k*2+1]);
}
int query(int L,int R,int l,int r,int k){
    int mid=l+r>>1;
    if (L>r||l>R) return 0;
    if (L<=l&&R>=r)
        return tree[k];
    pushdown(k,k*2);
    pushdown(k,k*2+1);
    lazy[k]=0;
    return max(query(L,R,l,mid,k*2),query(L,R,mid+1,r,k*2+1));
}
int ans;
int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        num[a[i]]++;
        if (head[a[i]]==0){
            update(i,n,1,n,1,1);
        }else
            nxt[head[a[i]]]=i;
        if (num[a[i]]==2)
            update(i,n,1,n,1,-1);
        head[a[i]]=i;
    }
    for (int i=1;i<=n;i++){
        ans=max(ans,query(i,n,1,n,1));
        update(i,n,1,n,1,-1);
        if (nxt[i]){
            update(nxt[i],n,1,n,1,2);
            if (nxt[nxt[i]])
                update(nxt[nxt[i]],n,1,n,1,-1);
        }
    }
    cout << ans << endl;
}
