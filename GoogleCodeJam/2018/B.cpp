#include <bits/stdc++.h>

using namespace std;

void trouble(vector<int> &v) {
    bool done = false;

    while (!done) {
        done = true;
        for (unsigned int i = 0; i < v.size() - 2; i++)
            if (v[i] > v[i+2]) {
                done = false;
                swap(v[i], v[i+2]);
            }
    }
}

int main() {
    int t, n, d;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;
        vector<int> v;

        for (int j = 0; j < n; j++) {
            cin >> d;
            v.push_back(d);
        }

        trouble(v);

        cout << "Case #" << i << ": ";
        if (is_sorted(v.begin(), v.end()))
            cout << "OK" << endl;
        else {
            unsigned int j = 0;
            for (j = 0; j < v.size() - 1; j++)
                if (v[j] > v[j+1])
                    break;
            cout << j << endl;
        }
    }

    return 0;
}
