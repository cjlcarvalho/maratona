#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, double> notas;
    notas['W'] = 1.0;
    notas['H'] = 0.5;
    notas['Q'] = 0.25;
    notas['E'] = 0.125;
    notas['S'] = 1.0 / 16.0;
    notas['T'] = 1.0 / 32.0;
    notas['X'] = 1.0 / 64.0;

    string compasso;

    while (getline(cin, compasso)) {
        if (compasso == "*")
            break;

        double acum = 0.0;
        int certos = 0;

        for (char c : compasso) {
            if (c == '/') {
                if (acum == 1.0)
                    certos++;
                acum = 0.0;
                continue;
            }

            acum += notas[c];
        }

        cout << certos << endl;
    }

    return 0;
}
