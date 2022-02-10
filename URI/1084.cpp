#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, d, a;
    string dg;

    while (cin >> n >> d, n && d) {
        cin.ignore();
        cin >> dg;
        
        stack<char> S;

        int a = 0;

        for (int i = 0; i < n; i++) {
            while (!S.empty() && S.top() < dg[i] && a < d) {
                a++;
                S.pop();
            }
            if (S.size() < n - d)
                S.push(dg[i]);
        }

        int size = S.size();
        string result(size, ' ');

        for (int i = size; i > 0; i--) {
            result[i - 1] = S.top();
            S.pop();
        }

        cout << result << endl;
    }

    return 0;
}
