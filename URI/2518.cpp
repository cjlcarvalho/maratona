#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, c, l;
    cout << fixed << setprecision(4);
    while(cin >> n >> h >> c >> l) {
        cout << (hypot(h, c) * n * l) / 10000 << endl;
    }
    return 0;
}
