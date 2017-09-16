#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int matriz[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> matriz[i][j];
        }
    }
    int x, y;
    x = y = 0;
    bool find = false;
    for(int i = 0; i<n && !find; i++){
        for(int j = 0; j<m && !find; j++){
            if(matriz[i][j] == 42){
                int cont = 0;
                for(int k = i - 1; k >= 0 && k <= i + 1 && k < n; k++){
                    for(int l = j - 1; l >= 0 && l <= j + 1 && l < m; l++){
                        if(matriz[k][l] == 7) cont++;
                    }
                }
                if(cont == 8){
                    x = i + 1;
                    y = j + 1;
                    find = true;
                }
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}
