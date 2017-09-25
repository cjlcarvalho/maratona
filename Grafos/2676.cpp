#include <bits/stdc++.h>
#define INF 10000000

using namespace std;

void solve(int** grafo, int n){
    for(int k = 0; k < n; k++)
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
                
    vector<int> cidades;
    int soma, menor = -1;
    for(int i = 0; i<n; i++){
        soma = 0;
        for(int j = 0; j<n; j++)
            if(grafo[i][j] != INF)
                soma += grafo[i][j];
                
        if(menor == -1){
            cidades.push_back(i);
            menor = soma;
        }
        else if(soma == menor){
            cidades.push_back(i);
            menor = soma;
        }
        else if(soma < menor){
            cidades.clear();
            cidades.push_back(i);
            menor = soma;
        }
    }
    sort(cidades.begin(), cidades.end());
    for(int i = 0; i<cidades.size(); i++){
        cout << cidades[i] + 1;
        cout << " ";
    }
    cout << endl;
}

int main(){
    int v, e, a, b, d;
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
        while(e--){
            cin >> a >> b >> d;
            grafo[a-1][b-1] = grafo[b-1][a-1] = d;
        }
        solve(grafo, v);
    }
    return 0;
}
