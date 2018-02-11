#include <bits/stdc++.h>

using namespace std;

int main() {
    int vet[10];
    string s;

    while (cin >> s) {
        memset(vet, 0, sizeof(vet));

        for (unsigned int i = 0; i < s.size(); i++)
            vet[s[i] - 48]++;
        
        int maior = -1;
        int qtMaior = -1;

        for (int i = 0; i < 10; i++) {
            if (vet[i] && (maior == -1 || qtMaior < vet[i])) {
                maior = i;
                qtMaior = vet[i];
            }
            else if (vet[i] && qtMaior == vet[i] && i > maior)
                maior = i;
        }

        cout << maior << endl;
    }
    return 0;
}
