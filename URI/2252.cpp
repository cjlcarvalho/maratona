#include <bits/stdc++.h>

using namespace std;

typedef vector< pair<double, int> > vii;

bool compare(pair<double, int> p1, pair<double, int> p2)
{
    if (p1.first > p2.first)
        return true;
    else if (p1.first == p2.first && p1.second < p2.second)
        return true;
    return false;
}

int main()
{
    unsigned int n, c = 1;
    double m;

    while (cin >> n) {
        vii v;
        string senha;
        for (int i = 0; i < 10; i++) {
            cin >> m;
            v.push_back({m, i});
        }
        sort(v.begin(), v.end(), compare);

        for (unsigned int i = 0; i < n; i++)
            senha.push_back(char(48 + v[i].second));
        
        cout << "Caso " << c++ << ": " << senha << endl;
    }

    return 0;
}
