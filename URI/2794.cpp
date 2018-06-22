#include <bits/stdc++.h>

using namespace std;

struct monte
{
    int d;
    int t;
};

bool compare(const monte m1, const monte m2)
{
    return m1.d < m2.d;
}

int main()
{
    int n, a, b;

    cin >> n;

    vector<monte> ms;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        ms.push_back({a, b});
    }

    sort(ms.begin(), ms.end(), compare);

    bool flag = true;

    for (int i = 0; i < n - 1 && flag; i++)
        if (ms[i].t < ms[i + 1].t)
            flag = false;

    cout << (flag ? "S" : "N") << endl;

    return 0;
}
