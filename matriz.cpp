#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int mat[n][n];
        int cont1 = 0, cont2 = (n-1);
        int linha = 0;
        while(cont1 <= cont2){
            for(int i = 0; i<n; i++){
                if(i == cont2)
                    mat[linha][i] = 2;
                else if(i == cont1)
                    mat[linha][i] = 1;
                else
                    mat[linha][i] = 3;
            }
            cont1++;
            cont2--;
            linha++;
        }
        while(cont2 >= 0){
            for(int i = 0; i<n; i++){
                if(i==cont2)
                    mat[linha][i] = 2;
                else if(i == cont1)
                    mat[linha][i] = 1;
                else
                    mat[linha][i] = 3;
            }
            cont1++;
            cont2--;
            linha++;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
