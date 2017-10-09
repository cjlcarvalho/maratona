#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int size = (n % 2) ? (n+1)/2 : n/2;
        int mat[size][size];
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                if(i == j)
                    mat[i][j] = 1;
                else
                    mat[i][j] = 3;
            }
            if(n % 2 && i == size - 1)
                mat[i][i] = 2;
        }
        for(int i = 0; i<((n % 2) ? size - 1 : size); i++){
            for(int j = 0; j<((n % 2) ? size - 1 : size); j++)
                cout << mat[i][j];
            for(int j = size - 1; j>=0; j--){
                if(mat[i][j] == 1) cout << 2;
                else cout << mat[i][j];
            }
            cout << endl;
        }
        for(int i = size - 1; i>=0; i--){
            for(int j = 0; j<((n % 2) ? size - 1 : size); j++){
                if(mat[i][j] == 1) cout << 2;
                else cout << mat[i][j];
            }
            for(int j = size - 1; j>=0; j--)
                cout << mat[i][j];
            cout << endl;   
        }
    }
    return 0;
}
