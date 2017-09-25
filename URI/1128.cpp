#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, e;
    while(cin >> v >> e){
        if(!v && !e) break;
        bool** grafo = new bool*[v];
        for(int i = 0; i<v; i++){
            grafo[i] = new bool[v];
            for(int j = 0; j<v; j++)
                grafo[i][j] = false;
        }
        int a, b, c;
        while(e--){
            cin >> a >> b >> c;
            if(c == 1){
                grafo[a-1][b-1] = true;
                for(int i = 0; i<v; i++){
                    if(grafo[a-1][i] && i != b-1){
                        if(grafo[i][a-1])
                            grafo[i][b-1] = true;
                    }
                }
            }
            else{
                grafo[a-1][b-1] = grafo[b-1][a-1] = true;
                for(int i = 0; i<v; i++)
                    if(grafo[a-1][i] && i != b-1){
                        if(grafo[i][a-1])
                            grafo[i][b-1] = grafo[b-1][i] = true;
                        else
                            grafo[i][b-1] = true;
                    }
            }
        }
        bool exist = true;
        for(int i = 0; i<v; i++){
            for(int j = 0; j<v; j++){
                if(i != j && !grafo[i][j]){
                    cout << i << " " << j << endl;
                    exist = false;
                }
            }
        }
        if(exist) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
