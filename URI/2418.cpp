#include <bits/stdc++.h>

using namespace std;

int main() {
    double vet[5];
    for (int i = 0; i < 5; i++) cin >> vet[i];
    sort(vet, vet + 5);
    cout << fixed << setprecision(1);
    cout << vet[1] + vet[2] + vet[3] << endl;
    return 0;
}
