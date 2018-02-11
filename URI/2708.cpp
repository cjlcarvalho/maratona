#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int i;

    int t, c;
    t = c = 0;

    while (cin >> s) {
        if (s == "ABEND") break;
        cin >> i;
        cin.ignore();

        if (s == "SALIDA") {
            c++;
            t += i;
        }
        else if (s == "VUELTA") {
            c--;
            t -= i;
        }
    }

    cout << t << endl;
    cout << c << endl;

    return 0;
}
