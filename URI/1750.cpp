#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) cin >> vet[i];

    int total = 0;

    sort(vet, vet + n);

    for (int i = 0; i < n; i += 2)
        total += min(abs(vet[i] - vet[i+1]), 24 - abs(vet[i] - vet[i+1]));

    total = (total < (24 - total)) ? total : 24 - total;

    cout << total << endl;

    return 0;
}
