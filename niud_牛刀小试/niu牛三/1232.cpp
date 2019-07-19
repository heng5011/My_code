/*************************************************************************
	> File Name: 1232.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 10时04分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct Node {
    int *father;
    int *rank;
} Node;

void init_node (Node *p, int x) {
    p -> father = (int *) malloc (sizeof (int) *x);
    p -> rank = (int *) malloc (sizeof (int) *x);
    for (int i = 0; i < x; i++) {
        p -> father[i] = i;
    }
    return ;
}

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*int max (int x, int y) {
    if (x > y) return x;
    return y;
}*/

int find (Node *node, int key) {
    if (node -> father[key] == key) return key;
    return node -> father[key] = find (node, node -> father[key]);
}

int _union (Node *node, int x, int y) {
    int a1 = find (node, x);
    int a2 = find (node, y);
    if (a1 == a2) return 0;
    if (node -> rank[a1] > node -> rank[a2]) {
        swap (&node -> rank[a1], &node -> rank[a2]);
    }
    node -> father[a1] = a2;
    node -> rank[a1] = max(node -> rank[a1] + 1, node -> rank[a2]);
    return 1;
}

int main() {
    int m, n;
    while (cin >> m && m) {
        cin >> n;
        Node *node = (Node *) malloc (sizeof(Node));
        init_node (node, m);
        int x, y, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            _union(node, x - 1, y - 1);
            ans++;
        }
        int arr[1001] = {0}, flag = 0;
        for (int i = 0; i < m; i++) {
            if (arr[find(node, i)] == 0) {
                arr[find(node, i)] = 1;
                flag++;
            }
        }
        cout << flag - 1 << endl;
    }
    return 0;
}
