#include <bits/stdc++.h>

using namespace std;

const int MAX = 2000;
int v[MAX];
int c[MAX];
int dp[MAX + 1][MAX + 1];

int solve(int i, int m, int n) {
    if (i == n)
        return 0;
    if (m == 0)
        return 0;
    if (m < 0)
        return -2000;
    if (dp[i][m] == -1)
        dp[i][m] = max(solve(i + 1, m, n), v[i] + solve(i, m - c[i], n));
    return dp[i][m];
}

int main() {
    int n, m;

    memset(dp, -1, sizeof(dp));
    while (scanf(" %d %d", &n, &m) != EOF) {
        for (int i = 0; i < n; i++)
            scanf(" %d %d", &c[i], &v[i]);
        printf("%d\n", solve(0, m, n));
    }

    return 0;
}
