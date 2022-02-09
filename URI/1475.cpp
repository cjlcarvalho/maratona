#include <bits/stdc++.h>

using namespace std;

const int MAX = 2000;
 
int f[MAX];
int opt[MAX][2];
int dp[MAX];
     
int solve(int i, int ini, int n, int c, int t1, int t2)
{
    if (abs(f[i] - f[ini]) >= c || i >= 2*n - 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int opt0 = solve(opt[i][0], ini, n, c, t1, t2);
    int opt1 = solve(opt[i][1], ini, n, c, t1, t2);

    dp[i] = min(opt0 + t1, opt1 + t2);

    return dp[i];
}

int opt_f(int i, int n, int t) {
    int result = -1;
    for (int j = i; j < 2*n; j++)
        if (f[j] - f[i] <= t)
            result = j + 1;
    return result;
}
     
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, c, t1, t2, result;

    while (cin >> n >> c >> t1 >> t2) {
     
        for(int i = 0; i < n; i++)
            cin >> f[i];
     
        for(int i = 0; i < n; i++)
            f[i + n] = f[i] + c;
     
        for(int i = 0; i < 2*n; i++) {
            opt[i][0] = opt_f(i, n, t1);
            opt[i][1] = opt_f(i, n, t2);
        }

        result = INT_MAX;
     
        for(int i = 0; i < n; i++) {
            memset(dp, -1, sizeof(dp));
            result = min(result, solve(i, i, n, c, t1, t2));
        }

        cout << result << endl;
    }

    return 0;
}
