#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m;

    map<int, int> mp;
    int e[m];

    for (int i = 0; i < n; i++) {
        cin >> c;
        mp[c] = i;
    }
    for (int i = 0; i < m; i++) cin >> e[i];

    int result = 0;
    int current = 0;

    for (int i = 0; i < m; i++) {
        result += abs(current - mp[e[i]]);
        current = mp[e[i]];
    }

    cout << result << endl;
    return 0;
}
