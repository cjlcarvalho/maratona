#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        int mat[n][m];
        int ox, oy, dx, dy;
        ox = oy = dx = dy = 0;
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++){
                cin >> mat[i][j];
                if(mat[i][j] == 1){
                    dx = i;
                    dy = j;
                }
                else if(mat[i][j] == 2){
                    ox = i;
                    oy = j;
                }    
            }
        cout << abs(dx - ox) + abs(dy - oy) << endl;
    }
    return 0;
}
