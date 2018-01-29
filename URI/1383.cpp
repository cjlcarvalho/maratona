#include <bits/stdc++.h>

using namespace std;

int main() {
    int mat[9][9];
    bool vet[9];
    int n;
    
    cin >> n;

    for (int i = 1; i<=n; i++) {
        
        memset(mat, 0, sizeof(mat));
        memset(vet, 0, sizeof(vet));

        for (int j = 0; j < 9; j++)
            for (int k = 0; k < 9; k++)
                cin >> mat[j][k];

        bool flag = false;

        for (int j = 0; j < 3 && !flag; j++)
            for (int k = 0; k < 3 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }

        memset(vet, 0, sizeof(vet));
        
        for (int j = 0; j < 3 && !flag; j++)
            for (int k = 3; k < 6 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }

        memset(vet, 0, sizeof(vet));

        for (int j = 0; j < 3 && !flag; j++)
            for (int k = 6; k < 9 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }

        memset(vet, 0, sizeof(vet));
        
        

        for (int j = 3; j < 6 && !flag; j++)
            for (int k = 0; k < 3 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
        
        memset(vet, 0, sizeof(vet));
        
        

        for (int j = 3; j < 6 && !flag; j++)
            for (int k = 3; k < 6 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
            
        memset(vet, 0, sizeof(vet));
        

        for (int j = 3; j < 6 && !flag; j++)
            for (int k = 6; k < 9 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
            
        memset(vet, 0, sizeof(vet));
        

        for (int j = 6; j < 9 && !flag; j++)
            for (int k = 0; k < 3 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
            
        memset(vet, 0, sizeof(vet));

        for (int j = 6; j < 9 && !flag; j++)
            for (int k = 3; k < 6 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
            
        memset(vet, 0, sizeof(vet));

        for (int j = 6; j < 9 && !flag; j++)
            for (int k = 6; k < 9 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }

        for (int j = 0; j < 9 && !flag; j++) {
            memset(vet, false, sizeof(vet));
            for (int k = 0; k < 9 && !flag; k++) {
                if (vet[mat[j][k] - 1])
                    flag = true;
                else
                    vet[mat[j][k] - 1] = true;
            }
            memset(vet, false, sizeof(vet));
            for (int k = 0; k < 9 && !flag; k++) {
                if (vet[mat[k][j] - 1])
                    flag = true;
                else
                    vet[mat[k][j] - 1] = true;
            }
        }
        
        cout << "Instancia " << i << endl;
        cout << (!flag ? "SIM" : "NAO") << endl << endl;
        
    }

    return 0;
}
