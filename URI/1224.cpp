#include <bits/stdc++.h>

using namespace std;

int vet[50000];

int solve(int d, int i, bool t, int h) {
    if (d == h) {
        return vet[i];
    }

    if (t)
        return max(solve(d + 1, i*2, false, h), solve(d + 1, i*2 + 1, false, h));
    return min(solve(d + 1, i*2, true, h), solve(d + 1, i*2 + 1, true, h));
}

int l2(int n) {
    return (n == 1) ? 0 : 1 + l2(n/2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, h, a;

    while (cin >> n) {
        while (n > 0) {
            for (int i = 0; i < n; i++) {
                cin >> vet[i];
            }

            int h = l2(n);
            cout << "max " << solve(0, 0, true, h) << endl;
            n--;
        }
    }
    return 0;
}
