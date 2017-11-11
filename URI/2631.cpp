#include <bits/stdc++.h>

using namespace std;

void startUnion(int* parent, int n){
    for(int i = 0; i<n; i++)
        parent[i] = i;
}

int find(int* parent, int x){
    if(parent[x] == x) return x;
    return find(parent, parent[x]);
}

void join(int* parent, int x, int y, int n){
    int pX = find(parent, x);
    int pY = find(parent, y);
    parent[pX] = pY;
}

bool connected(int* parent, int x, int y){
    return find(parent, x) == find(parent, y);
}

int main(){
    int n, m, q, a, b;
    int* parent;
    bool check = false;
    while(scanf(" %d %d %d", &n, &m, &q) != EOF){
        if(!check) check = true;
        else printf("\n");
        parent = new int[n];
        startUnion(parent, n);
        for(int i = 0; i<m; i++){
            scanf(" %d %d", &a, &b);
            join(parent, a - 1, b - 1, n);
        }
        for(int i = 0; i<q; i++){
            scanf(" %d %d", &a, &b);
            if(connected(parent, a - 1, b - 1)) printf("S\n");
            else printf("N\n");
        }
        delete[] parent;
    }
    return 0;
}
