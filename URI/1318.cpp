#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, t;

    while (cin >> n >> m, n || m) {
        int vet[n];

        memset(vet, 0, sizeof(vet));

        for (int i = 0; i < m; i++) {
            cin >> t;
            vet[t-1]++;
        }

        int _ = 0;

        for (int i = 0; i < n; i++)
            if (vet[i] > 1)
                _++;

        cout << _ << endl;
    
    }

    return 0;
}

