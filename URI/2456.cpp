#include <bits/stdc++.h>

using namespace std;

int main() {
    int vet[5];

    for (int i = 0; i < 5; i++) cin >> vet[i];

    if (is_sorted(vet, vet + 5))
        cout << "C" << endl;
    else {
        reverse(vet, vet + 5);
        if (is_sorted(vet, vet + 5))
            cout << "D" << endl;
        else 
            cout << "N" << endl;
    }

    return 0;
}
