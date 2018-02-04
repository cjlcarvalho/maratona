#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    bool find;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++) cin >> vet[i];
    cin >> s;

    int i = n - 1;

    while (vet[i] >= s && i >= 0) i--;

    for (; i > 0; i--) {
        int j = i - 1;
        find = false;
        while (j >= 0) {
            if(vet[i] + vet[j] == s) {
                cout << vet[j] << " " << vet[i] << endl;
                find = true;
                break;
            }
            j--;
        }
        if (find) break;
    }

    return 0;
}
