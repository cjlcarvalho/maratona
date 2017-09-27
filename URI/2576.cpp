#include <bits/stdc++.h>
#define INF 9999999
using namespace std;

int solve(int** grafo, int n, int src, int dest){
    for(int k = 0; k<n; k++)
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
    return grafo[src][dest];
}

int main(){
    int c, s, a, b, c1, c2;
    cin >> c >> s >> a >> b;
    a -= 1;
    b -= 1;
    int** grafo = new int*[c];
    for(int i = 0; i<c; i++) {
        grafo[i] = new int[c];
        for(int j = 0; j<c; j++)
            grafo[i][j] = INF;
    }
    while(s--){
        cin >> c1 >> c2;
        grafo[c1 - 1][c2 - 1] = 0;
        grafo[c2 - 1][c1 - 1] = 1;
    }
    
    int bibi = solve(grafo, c, a, b);
    int bibika = solve(grafo, c, b, a);
    
    if(bibi < bibika)
        cout << "Bibi: " << bibi << endl;
    else if(bibika < bibi)
        cout << "Bibika: " << bibika << endl;
    else
        cout << "Bibibibika" << endl;
    return 0;
}
