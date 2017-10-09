#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    unsigned long mat[n+1][n+1];
    memset(mat, 0, sizeof(mat));
    mat[0][0] = 1;
    for(int i = 1; i<n+1; i++){
        mat[i][0] = mat[i-1][0] + 2 * mat[i-1][1];
        for(int j = 1; j<i; j++){
            unsigned long soma = mat[i-1][j];
            if(j-1 >= 0)
                soma += mat[i-1][j-1];
            if(j+1 < i)
                soma += mat[i-1][j+1];
            mat[i][j] = soma;
        }
        mat[i][i] = 1;
    }   
    unsigned long soma = mat[n][0];
    for(int i = 1; i<=n; i++)
        soma += mat[n][i] * 2;
    cout << soma << "\n";
    return 0;
}
