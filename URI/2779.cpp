#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a;

    cin >> n >> m;

    bool vet[n];
    
    memset(vet, false, sizeof(vet));

    for (int i = 0; i < m; i++) {
        cin >> a;
        vet[a - 1] = true;
    }

    int cont = 0;
    for (int i = 0; i < n; i++) if (!vet[i]) cont++;

    cout << cont << endl;
    
    return 0;
}
