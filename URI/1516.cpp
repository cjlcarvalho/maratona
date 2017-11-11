#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x, y;
    while(cin >> n >> m){
        if(!n && !m) break;
        cin.ignore();
        char mat[n][m];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                cin >> mat[i][j];
        cin >> x >> y;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<(x / n); j++){
                for(int k = 0; k<m; k++){
                    for(int l = 0; l < (y/m); l++){
                        cout << mat[i][k];
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
