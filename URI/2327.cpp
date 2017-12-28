#include <bits/stdc++.h>

using namespace std;

int magic(int** square, int n){
    int linha, coluna, comp = 0, diagonal1 = 0, diagonal2 = 0;
    for(int i = 0; i<n; i++) comp += square[0][i];
    for(int i = 0; i<n; i++){
        linha = coluna = 0;
        diagonal1 += square[i][i];
        for(int j = 0; j<n; j++){
            linha += square[i][j];
            coluna += square[j][i];
        }
        if(linha != comp || coluna != comp)
            return -1;
    }
    if(diagonal1 != comp) return -1;
    for(int i = 0, j = n - 1; i < n; i++, j--)
        diagonal2 += square[i][j];
    if(diagonal2 != comp) return -1;
    return comp;
}

int main(){
    int n;
    cin >> n;
    int** square = new int*[n];
    for(int i = 0; i<n; i++){
        square[i] = new int[n];
        for(int j = 0; j<n; j++)
            cin >> square[i][j];
    }
    cout << magic(square, n) << endl;
    return 0;
}
