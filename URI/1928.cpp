#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, d;
    cin >> n;
    vector< vector<int> > v(n / 2);
    for (int i = 0; i < n; i++) {
        cin >> c;
        v[c-1].push_back(i);
    }

    int mat[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = 0;

    for (int i = 0; i < n-1; i++) {
        cin >> c >> d;
        mat[c-1][d-1] = 1;
        mat[d-1][c-1] = 1;
    }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = max(mat[i][j], mat[i][k] + mat[k][j]);

    int result = 0;

    for (const vector<int> &e : v) {
        cout << e[0] << " " << e[1] << " " << mat[e[0]][e[1]] << endl;
        result += mat[e[0]][e[1]];
    }

    cout << result << endl;

    return 0;

}
