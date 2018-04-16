#include <bits/stdc++.h>

using namespace std;

int points(const vector< pair<int, int> > &vp) 
{
    int result = 0;

    for (auto i : vp) {
        if (i.first > i.second)
            result += 3;
        else if (i.first == i.second)
            result++;
    }

    return result;
}

bool compare(pair<int, int> p1, pair<int, int> p2) 
{
    if (p1.first == p1.second && p2.first != p2.second)
        return true;
    else if (p1.first < p1.second && (p2.first > p2.second))
        return true;
    else if (p1.first < p1.second && p2.first < p2.second && (p1.second - p1.first) < (p2.second - p2.first))
        return true;
    return false;
}

int main()
{
    int n, g, a, b;

    while (cin >> n >> g) {
        vector< pair<int, int> > vp;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            vp.push_back({a, b});
        }

        sort(vp.begin(), vp.end(), compare);

        int i = 0;
        while (i < n && g) {
            if (vp[i].first < vp[i].second) {
                if ((vp[i].second - vp[i].first) <= g) {
                    g -= vp[i].second - vp[i].first;
                    vp[i].first += (vp[i].second - vp[i].first);
                    if (g) {
                        g--;
                        vp[i].first++;
                    }
                }
            }
            else if (vp[i].first == vp[i].second) {
                g--;
                vp[i].first++;
            }

            i++;
        }

        cout << points(vp) << endl;
    }

    return 0;
}
