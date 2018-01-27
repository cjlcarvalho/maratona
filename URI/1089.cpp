#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, picos, ant;
    bool status;

    while (cin >> n, n) {
        picos = 0;
        status = 1;
        cin >> ant;
        cin >> m;
        if (ant > m) {
            picos++;
            status = 0;
        }
        ant = m;
        for (int i = 2; i < n; i++) {
            cin >> m;
            if (ant < m && !status) {
                picos++;
                status = 1;
            }
            else if (ant > m && status) {
                picos++;
                status = 0;
            }
            ant = m;
        }
        
        if (!status)
            picos++;

        cout << picos << endl;
    }

    return 0;
}
