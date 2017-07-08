#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> v[i][j];
    int resultC, resultL, maior = 0;
    for(int i = 0; i<n; i++){
        resultL = 0;
        for(int j = 0; j<m; j++)
            resultL += v[i][j];
        if(resultL > maior)
            maior = resultL;
    }
    for(int i = 0; i<m; i++){
        resultC = 0;
        for(int j = 0; j<n; j++)
            resultC += v[j][i];
        if(resultC > maior)
            maior = resultC;
    }
    cout << maior << endl;
    return 0;
}
