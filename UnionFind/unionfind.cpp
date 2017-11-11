#include <bits/stdc++.h>

// union-find
// estrutura de dados para formação de conjuntos dispersos
// interessante para problemas de conectividade entre vértices de grafos

using namespace std;

struct UnionFind {
    int N;
    int* parent;
    
    UnionFind(int n) : N(n) {
        this->parent = new int[this->N];
        for(int i = 0; i<this->N; i++)
            this->parent[i] = i;
    }
    
    // O(1)
    int quickFind(int x){
        return this->parent[x];
    }
    
    // O(n)
    void uniao(int x, int y){
        int pX = this->quickFind(x);
        int pY = this->quickFind(y);
        for(int i = 0; i < this->N; i++)
            if(parent[i] == pY)
                parent[i] = pX;
    }
    
    // O(n)    
    int find(int x){
        if(this->parent[x] == x) return x;
        return find(parent[x]);
    }
    
    // O(n)
    void quickUnion(int x, int y){
        int pX = find(x);
        int pY = find(y);
        this->parent[pY] = pX;
    }
    
    bool connected(int x, int y){
        return find(x) == find(y);
    }
    
};

int main(){
    int n, m, a, b, o;
    cin >> n >> m >> o;
    UnionFind u(n);
    for(int i = 0; i<m; i++){
        cin >> a >> b;
        u.uniao(a, b);
    }
    for(int i = 0; i<m; i++){
        cin >> a >> b;
        if(u.connected(a, b)) cout << "S";
        else cout << "N";
        cout << endl;
    }
    return 0;      
}
