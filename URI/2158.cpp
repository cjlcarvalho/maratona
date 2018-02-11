#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, arestas;

    int t = 1;

    while (cin >> a >> b) {
        arestas = (a * 5 + b * 6) / 2;
        cout << "Molecula #" << t << ".:." << endl;
        cout << "Possui " << 2 + arestas - (a + b) << " atomos ";
        cout << "e " << arestas << " ligacoes" << endl << endl;
        t++;
    }

    return 0;
}
