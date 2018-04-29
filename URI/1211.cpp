#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        vector<string> v;
        string s;

        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);
        }

        sort(v.begin(), v.end());

        int result = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (v[i][0] != v[j][0]) break;
                for (unsigned int k = 0; k < v[i].size() && k < v[j].size(); k++) {
                    if (v[i][k] == ' ' && v[j][k] == ' ')
                        continue;
                    if (v[j][k] == v[i][k]) {
                        result++;
                        v[j][k] = ' ';
                    }
                    else
                        break;
                }
            }
        }

        cout << result << endl;

    }

    return 0;
}
