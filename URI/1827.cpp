#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    int mat[(n / 2 + 1)][n];
    memset(mat, 0, sizeof(mat));
    for(int i = n / 3; i <= n/2; i++)
        for(int j = n/3; j < n-(n/3); j++)
            mat[i][j] = 1;
    for(int i = 0; i<n/3; i++)
        mat[i][i] = 2;
    for(int i = 0, j = n - 1; i<n/3; i++, j--)
        mat[i][j] = 3;
    mat[n/2][n/2] = 4;
    for(int i = 0; i<=n/2; i++){
        for(int j = 0; j<n; j++){
            cout << mat[i][j];
            if(j == n - 1)
                cout << endl;
        }
    } 
    for(int i = (n/2) - 1; i >= 0; i--){
        for(int j = n - 1; j>=0; j--){
            cout << mat[i][j];
            if(j == 0)
                cout << endl;
        }
    }
    cout << endl;
}

int main(){
    int n;
    while(cin >> n)
        solve(n);
    return 0;
}
