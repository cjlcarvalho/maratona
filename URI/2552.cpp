#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        int mat[n][m];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++){
                cin >> mat[i][j];
                if(mat[i][j])
                    mat[i][j] = 9;
            }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 9) cout << mat[i][j];
                else{
                    int cont = 0;
                    if(j + 1 < m && mat[i][j+1] == 9)
                        cont++;
                    if(j-1 >= 0 && mat[i][j-1] == 9)
                        cont++;
                    if(i + 1 < n && mat[i+1][j] == 9)
                        cont++;
                    if(i - 1 >= 0 && mat[i-1][j] == 9)
                        cont++;
                    cout << cont;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
