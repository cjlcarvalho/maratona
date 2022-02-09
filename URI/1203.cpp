#include <bits/stdc++.h>

using namespace std;

const int MAX = 101;
int d[MAX];
bool dp[MAX][MAX * (MAX - 1) / 2];
bool vs[MAX][MAX * (MAX - 1) / 2];

bool solve(int r, int k) {
    if (r < 0 || k < 0)
        return false;

    if (vs[r][k])
        return dp[r][k];

    vs[r][k] = true;

    if (dp[r][k])
        return dp[r][k];

    if (r == 0) {
        dp[r][k] = false;
        return dp[r][k];
    }

    if (k - d[r] < 0) {
        dp[r][k] = solve(r - 1, k);
        return dp[r][k];
    }

    dp[r][k] = solve(r - 1, k) || solve(r - 1, k - d[r]);
    return dp[r][k];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, k, a, b;

    while (cin >> r >> k) {
        memset(dp, false, sizeof(dp));
        memset(vs, false, sizeof(vs));
        memset(d, 0, sizeof(d));

        for (int i = 0; i < k; i++) {
            cin >> a >> b;
            d[a - 1]++;
            d[b - 1]++;
        }

        dp[0][0] = true;
        vs[0][0] = true;

        if (solve(r, k))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
