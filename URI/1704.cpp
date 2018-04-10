#include <bits/stdc++.h>

using namespace std;

struct Tarefa 
{
    double v, t;

    double tph() const
    {
        return v / t;
    }
};

bool compare(const Tarefa &t1, const Tarefa &t2)
{
    if (t1.tph() > t2.tph())
        return true;
    else if (t1.tph() == t2.tph() && t1.v > t2.v)
        return true;
    else if (t1.tph() == t2.tph() && t1.v == t2.v && t1.t > t2.t)
        return true;
    return false;
}

int main()
{
    int n, h;
    double a, b;

    while (cin >> n >> h) {
        vector<Tarefa> v;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            v.push_back({a, b});
        }

        sort(v.begin(), v.end(), compare);

        cout << endl;
        for (Tarefa i : v)
            cout << i.v << " " << i.t << endl;

        unsigned int i = 0;
        int cont = 0, val = 0;

        while ((v[i].t + cont) <= h) {
            cout << v[i].t << " " << cont << endl;
            cont += v[i].t;
            val += v[i++].v;
        }
        cout << cont << endl;
        cout << val << endl;

        while (i < v.size())
            val -= v[i++].v;

        cout << (val >= 0 ? 0 : abs(val)) << endl;
    }

    return 0;
}
