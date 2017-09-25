#include <bits/stdc++.h>

using namespace std;

void solution(int** grafo, int n){
    for(int k = 0; k<n; k++)
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
                
    int maior = 0;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            if(grafo[i][j] > maior)
                maior = grafo[i][j];
                
    cout << maior << endl;
}

int main(){
    int v, e;
    int a, b, d;
    int s = 1;
    while(cin >> v >> e){
        int** grafo = new int*[v];
        for(int i = 0; i<v; i++){
            grafo[i] = new int[v];
            for(int j = 0; j<v; j++) {
                if(i == j) grafo[i][j] = 0;
                else grafo[i][j] = 999999;
            }
        }
        while(e--){
            cin >> a >> b >> d;
            grafo[a-1][b-1] = grafo[b-1][a-1] = d;
        }
        cout << "Instancia " << s << endl;
        solution(grafo, v);
        cout << endl;
        s++;
    }
    return 0;
}
