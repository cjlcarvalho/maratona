#include <bits/stdc++.h>
#define INF 1000000

using namespace std;

void solve(int** grafo, int n){
    for(int k = 0; k<n; k++)
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
}

int main(){
    int v, e;
    while(cin >> v >> e){
        if(!v && !e) break;
        int** grafo = new int*[v];
        for(int i = 0; i<v; i++){
            grafo[i] = new int[v];
            for(int j = 0; j<v; j++){
                if(i == j) grafo[i][j] = 0;
                else grafo[i][j] = INF;
            }
        }
        int a, b, c, d;
        while(e--){
            cin >> a >> b >> d;
            if(grafo[b-1][a-1] != INF)
                grafo[a-1][b-1] = grafo[b-1][a-1] = 0;
            else
                grafo[a-1][b-1] = d;
        }
        solve(grafo, v);
        cin >> c;
        while(c--){
            cin >> a >> b;
            if(grafo[a-1][b-1] == INF)
                cout << "Nao e possivel entregar a carta" << endl;
            else
                cout << grafo[a-1][b-1] << endl;
        }
        cout << endl;
    }
    return 0;
}
