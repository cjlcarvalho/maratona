#include <bits/stdc++.h>

using namespace std;

int main() {
    double n1, d1, v1, n2, d2, v2;

    cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;

    cout << fixed << setprecision(0);

    if ((d1 / (v1 * 1000)) < (d2 / (v2 * 1000)))
        cout << n1 << endl;
    else
        cout << n2 << endl;

    return 0;
}
