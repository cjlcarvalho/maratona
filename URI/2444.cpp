#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t, c;
    cin >> v >> t;

    while (t--) {
        cin >> c;
        if (v + c < 0)
            v = 0;
        else if (v + c > 100)
            v = 100;
        else
            v += c;
    }

    cout << v << endl;

    return 0;
}
