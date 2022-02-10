#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll MAX = 1000000LL;
map<ll, ll> dp;

ll mod(ll n) {
    return (n % MAX + MAX) % MAX;
}

ll solve(ll n, ll k, ll l) {
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 5)
        return k;
    if (dp.count(n))
        return dp[n];

    ll left = n/2 - (n/2) % 5;
    ll right = n - left;

    dp[n] = mod(mod(solve(left, k, l) * solve(right, k, l)) + mod(mod(solve(left-5, k, l) * l) * solve(right-5, k, l)));
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k, l;

    while (cin >> n >> k >> l) {
        dp.clear();

        k = mod(k);
        l = mod(l);

        ll result = solve(n, k, l);
        printf("%.6lld\n", result);
    }

    return 0;
}
