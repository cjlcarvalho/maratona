#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m) {
        int vet[n];
        for (int i = 0; i < n; i++) cin >> vet[i];

        sort(vet, vet + n);
        reverse(vet, vet + n);

        int sum = 0;
        for (int i = 0; i < m; i++) sum += vet[i];

        cout << sum << endl;
    }
    return 0;
}
