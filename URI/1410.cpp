#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, d;

    while (cin >> a >> d, a || d) {
        int atac[a], def[d];

        for (int i = 0; i < a; i++) cin >> atac[i];
        for (int i = 0; i < d; i++) cin >> def[i];

        sort(atac, atac + a);
        sort(def, def + d);

        bool flag = false;

        for (int i = 0; i < a && !flag; i++)
            if (atac[i] < def[1]) flag = true;

        cout << (flag ? "Y" : "N") << endl;
    }

    return 0;
}
