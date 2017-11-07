#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool mat[n+1][n+1];
    for(int i = 0; i<n+1; i++)
        for(int j = 0; j<n+1; j++)
            cin >> mat[i][j];
    for(int i = 0; i<n; i++){
        for(int j = 1; j < n+1; j++){
            if((mat[i][j] + mat[i][j-1] + mat[i+1][j] + mat[i+1][j-1]) >= 2)
                cout << "S";
            else
                cout << "U";
        }
        cout << endl;
    } 
    return 0;
}
