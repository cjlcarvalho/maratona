#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;

    int c = 1;

    while (cin >> n, n) {
        cin.ignore();
        string nm[2];

        cin >> nm[0] >> nm[1];

        cout << "Teste " << c++ << endl;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;

            if ((a + b) % 2 == 0) cout << nm[0] << endl;
            else cout << nm[1] << endl;
        }
        cout << endl;
    }
    return 0;
}
