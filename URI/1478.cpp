#include <bits/stdc++.h>

using namespace std;

int qtDigits(int n){
    int result = 0;
    while(n){
        result++;
        n /= 10;
    }
    return result;
}

void solve(int n){
    int mat[n][n];
    for(int i = 0; i<n; i++){
        int j = 0, cont = i + 1;
        while(cont > 0){
            mat[i][j] = cont;
            cont--;
            j++;
        }
        cont = 2;
        while(j < n){
            mat[i][j] = cont;
            j++;
            cont++;
        }
   }
   for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int k = 3 - qtDigits(mat[i][j]);
            while(k--) cout << " ";
            cout << mat[i][j];
            if(j == n - 1)
                cout << endl;
            else
                cout << " ";
        } 
   }
   cout << endl;
}

int main(){
    int n;
    while(cin >> n, n != 0)
        solve(n);
    return 0;
}
