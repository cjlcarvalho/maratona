#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second >= 4) {
        if (p2.second < 4)
            return true;
        else if (p2.second >= 4 && p1.second > p2.second)
            return true;
    }
    else if (p1.second > p2.second)
        return true;
    return false;
}

int main()
{
    int n, a, b;

    while (cin >> n, n) {
        vector< pair<int, int> > vp;

        int count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            vp.push_back({a, b});
        }

        sort(vp.begin(), vp.end(), compare);

        int i = 0;
        while (i < n) {

            if (vp[i].second >= 4) {
                count += vp[i].second / 4;
                vp[i].second %= 4;
            }
            else if (vp[i].second >= 2) {
                int j = i + 1;
                while (j < n) {
                    if (vp[j].second >= 2) {
                        if ((vp[j].second / 2) == (vp[i].second / 2)) {
                            count += vp[i].second / 2;
                            vp[j].second %= 2;
                            vp[i].second %= 2;
                        }
                        else if ((vp[j].second / 2) > (vp[i].second / 2)) {
                            count += vp[i].second / 2;
                            vp[j].second -= (vp[i].second / 2) * 2;
                            vp[i].second %= 2;
                        }
                        else if ((vp[j].second / 2) < (vp[i].second / 2)) {
                            count += vp[j].second / 2;
                            vp[i].second -= (vp[j].second / 2) * 2;
                            vp[j].second %= 2;
                        }
                        break;
                    }
                    j++;
                }

                if (j == n) i++;
            }
            else if (vp[i].second % 2 || !vp[i].second) i++;
        }

        cout << count << endl;
    }

    return 0;
}
