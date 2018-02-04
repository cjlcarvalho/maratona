#include <bits/stdc++.h>

using namespace std;

int main() {
    int cont, result = 0, current;

    int n;

    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) cin >> vet[i];
    
    for (int i = 0; i < n; i++) {
        cont = 1;
        current = vet[i];
        i++;
        while (current == vet[i] && i < n) {
            cont++;
            i++;
        }
        i--;
        if (cont > result) result = cont;
    }

    cout << result << endl;
    
    return 0;
}
