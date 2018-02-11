#include <bits/stdc++.h>

using namespace std;

int main() {
    float w1, w2, r, m;
    float cont, total;

    cont = total = 0;

    while (cin >> w1 >> w2 >> r, w1 || w2 || r) {
        m = ((w1 + w2)/2) * (1.0 + (r/30.0));
        if (m > 60)
            cout << "AQUI E BODYBUILDER!!" << endl;
        else if (m >= 40)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else if (m >= 14)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if (m >= 13)
            cout << "E 13" << endl;
        else if (m >= 1)
            cout << "Nao vai da nao" << endl;

        cont++;
        total += m;
    }

    if (total / cont > 40) {
        cout << endl;
        cout << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
    }

    return 0;
}
