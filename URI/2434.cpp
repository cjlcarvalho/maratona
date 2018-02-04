#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, mn;

    cin >> n >> m;

    mn = m;

    while (n--) {
        cin >> a;
        m += a;
        if (m < mn) mn = m;
    }

    cout << mn << endl;

    return 0;
}
