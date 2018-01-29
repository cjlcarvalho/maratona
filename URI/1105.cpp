#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d, c, v;

    while (cin >> b >> n, b || n) {
        int bancos[b];
        for (int i = 0; i < b; i++) cin >> bancos[i];
        
        for (int i = 0; i < n; i++) {
            cin >> d >> c >> v;

            bancos[d-1] -= v;
            bancos[c-1] += v;
        }

        bool done = true;
        for (int i = 0; i < b && done; i++)
            if (bancos[i] < 0)
                done = false;

        cout << (done ? "S" : "N") << endl;
    }

    return 0;
}
