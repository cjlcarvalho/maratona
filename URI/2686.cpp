#include <bits/stdc++.h>

using namespace std;

void solve(double g) {
    int m, gr;

    if (g >= 270.0) {
        cout << "De Madrugada!!" << endl;
        g -= 270;
        g *= 4;
        m = fmod(g, 60);
        gr = g / 60;
    }
    else if(g >= 180.0) {
        cout << "Boa Noite!!" << endl;
        g -= 180;
        g *= 4;
        m = fmod(g, 60);
        g /= 60;
        gr = g + 18;
    }
    else if(g >= 90.0) {
        cout << "Boa Tarde!!" << endl;
        g -= 90;
        g *= 4;
        m = fmod(g, 60);
        g /= 60;
        gr = g + 12;
    }
    else {
        cout << "Bom Dia!!" << endl;
        g *= 4;
        m = fmod(g, 60);
        g /= 60;
        gr = g + 6;
    }

    printf("%02d:%02d:%02d\n", gr, m, 0);

}

int main() {
    double g;
    while(cin >> g)
        solve(g);
    return 0;
}
