#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 10000;

ll dp[MAX][3];
ll v[MAX];

ll solve(int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = n - k+1, j = i+k-1; i >= 1; i--, j--) {
            if (k == 1)
                dp[i][j%3] = v[i];
            else if (k == 2)
                dp[i][j%3] = max(v[i], v[j]);
            else
                dp[i][j%3] = max(min(dp[i+2][j%3], dp[i+1][(j+2)%3]) + v[i], min(dp[i+1][(j+2)%3], dp[i][(j+1)%3]) + v[j]);
        }
    }
    return dp[1][n%3];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) {
        for(int i = 1; i <= n; i++)
            cin >> v[i];
        cout << solve(n) << endl;
    }
    return 0;
}
