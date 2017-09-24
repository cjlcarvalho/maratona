#include <bits/stdc++.h>

using namespace std;

void pathR(bool** grafo, bool* check, int n, int current, int level){
    check[current] = true;
    for(int j = 0; j<n; j++){
        if(grafo[current][j]){
            for(int i = 0; i<level; i++) cout << "  ";
            if(check[j])
                cout << current << "-" << j << endl;
            else {
                cout << current << "-" << j << " pathR(G," << j << ")" << endl;
                pathR(grafo, check, n, j, level + 1);
            }
        }
    }
}

bool isOrigin(bool** grafo, int n, int v){
    for(int i = 0; i<v; i++)
        if(grafo[n][i]) return true;
    return false;
}

int main(){
    int n, v, e, a, b;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> v >> e;
        bool** grafo = new bool*[v];
        bool* check = new bool[v];
        memset(check, false, v);
        for(int i = 0; i<v; i++){
            grafo[i] = new bool[v];
            for(int j = 0; j<v; j++)
                grafo[i][j] = false;
        }
        while(e--){
            cin >> a >> b;
            grafo[a][b] = true;
        }
        cout << "Caso " << i << ":" << endl;
        for(int i = 0; i<v; i++){
            if(!check[i]){
                pathR(grafo, check, v, i, 1);
                if(isOrigin(grafo, i, v)) cout << endl;
            }
        }
    }
    return 0;
}
