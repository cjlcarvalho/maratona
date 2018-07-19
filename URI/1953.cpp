#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        int epr = 0, ehd = 0, intr = 0;

        int mat;

        string sig;

        while (n--) {
            cin >> mat >> sig;

            if (sig == "EPR") epr++;
            else if (sig == "EHD") ehd++;
            else intr++;
        }

        cout << "EPR: " << epr << endl;
        cout << "EHD: " << ehd << endl;
        cout << "INTRUSOS: " << intr << endl;
    }

    return 0;
}
