#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int car, v, n;

    cin >> car >> v;

    vector<pair<int, int>> vv;

    for (int i = 0; i < car; i++) {
        vv.push_back({i + 1, 0});

        for (int j = 0; j < v; j++) {
            cin >> n;
            vv[i].second += n;
        }
    }

    sort(vv.begin(), vv.end(), compare);

    for (int i = 0; i < 3; i++)
        cout << vv[i].first << endl;

    return 0;
}
