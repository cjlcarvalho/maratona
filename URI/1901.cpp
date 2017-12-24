#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    set<int> result;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin >> mat[i][j];
    for(int i = 0; i<n*2; i++){
        cin >> a >> b;
        result.insert(mat[a-1][b-1]);
    }
    cout << result.size() << endl;
    return 0;
}
