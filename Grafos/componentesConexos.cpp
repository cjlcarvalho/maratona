#include <bits/stdc++.h>

// problema 2440 do URI
// tentei fazer usando UnionFind, mas dava TLE

using namespace std;

struct Graph {
    int V;
    vector<int>* E;
    
    Graph(int v) : V(v){
        E = new vector<int>[v];
    }
    
    void add(int x, int y){
        E[x].push_back(y);
    }
    
    int connected(){
        bool visited[V];
        int total = 0;
        memset(visited, false, sizeof(visited));
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                total++;
                recursao(i, visited);
            }    
        }
        return total;
    }
    
private:
    void recursao(int i, bool* visited){
        if(visited[i]) return;
        visited[i] = true;
        for(int e : E[i])
            recursao(e, visited);
    }

};

int main(){
    int n, m, a, b;
    scanf(" %d %d", &n, &m);
    Graph grafo(n);
    for(int i = 0; i<m; i++){
        scanf(" %d %d", &a, &b);
        grafo.add(a - 1, b - 1);
        grafo.add(b - 1, a - 1);
    }
    printf("%d\n", grafo.connected());
    return 0;
}
