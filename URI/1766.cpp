#include <bits/stdc++.h>

using namespace std;

struct Rena {
    string nome;
    int peso;
    int idade;
    double altura;
};

bool compare(Rena a, Rena b) {
    if (a.peso > b.peso)
        return true;
    else if (a.peso == b.peso) {
        if (a.idade < b.idade)
            return true;
        else if (a.idade == b.idade) {
            if (a.altura < b.altura)
                return true;
            else
                return a.nome < b.nome;
        }
    }
    return false;
}

int main() {
    int t, n, m;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n >> m;
        
        Rena renas[n];

        for (int j = 0; j < n; j++) {
            cin.ignore();
            cin >> renas[j].nome;
            cin >> renas[j].peso >> renas[j].idade >> renas[j].altura;
        }

        sort(renas, renas + n, compare);

        cout << "CENARIO {" << i << "}" << endl;
        for (int j = 0; j < m; j++)
            cout << j + 1 << " - " << renas[j].nome << endl;

    }

    return 0;
}
