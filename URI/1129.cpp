#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, p;

    while (cin >> n, n) {
        int vet[n][5];
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < 5; j++)
                cin >> vet[i][j];
        for (int i = 0; i < n; i++) {
            b = p = 0;
            for (int j = 0; j < 5; j++) {
                if (vet[i][j] <= 127) p++;
                else b++;

                if (p > 1) break;
            }

            if (p > 1 || b == 5)
                cout << "*" << endl;
            else {
                for (int j = 0; j < 5; j++)
                    if (vet[i][j] <= 127) {
                        cout << char(65 + j) << endl;
                        break;
                    }
            }
        }
    }
    
    return 0;
}
