#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, e, c;

    cin >> q >> e;

    vector<int> v;

    for (int i = 0; i < e; i++) {
        cin >> c;

        v.push_back(c);
    }

    for (int i = 0; i < q; i++) {
        cin >> c;

        if (find(v.begin(), v.end(), c) == v.end()) {
            v.push_back(c);
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
