#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;

    while (cin >> n >> d, n || d) {

        int mat[d][n], cont;

        for (int i = 0; i < d; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];

        bool exist = false;

        for (int i = 0; i < n && !exist; i++) {
            cont = 0;
            for (int j = 0; j < d; j++) {
                if (mat[j][i])
                cont++;
            }
            if (cont == d)
                exist = true;
        }

        if (exist) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
