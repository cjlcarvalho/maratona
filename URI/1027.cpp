#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int max = -1, temp;
        int mat[n][2];
        for(int i = 0; i<n; i++)
            cin >> mat[i][0] >> mat[i][1];
        for(int i = 0; i<n; i++){
            temp = 1;
            int atualx = mat[i][0];
            int atualy = mat[i][1];
            for(int j = i + 1; j<n; j++){
                if(mat[j][0] != atualx && mat[j][1] != atualy && (atualy - mat[j][1] == 2 || atualy - mat[j][1] == -2)){
                    atualx = mat[j][0];
                    atualy = mat[j][1];
                    temp++;
                }
            }
            if(max == -1 || temp > max)
                max = temp;
        }
        cout << max << endl;
    }
    return 0;
}
