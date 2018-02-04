#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, j, acc, result = 0;
    cin >> n;

    int t[n];
    int vet[1000000];

    memset(vet, 0, sizeof(vet));

    for (int i = 0; i < n; i++) {
        cin >> t[i];
        vet[t[i]]++;
        acc = t[i];
        j = i - 1;
        while (j >= 0){
            acc += t[j];
            vet[acc]++;
            j--;
        }
    }

    for (int i = 0; i < 1000; i += 8)
        if (vet[i]) result += vet[i];

    cout << result << endl;

    return 0;
}
