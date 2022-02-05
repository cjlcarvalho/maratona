#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vii;

struct PipeCut
{
    int m_n;
    int m_max;
    vi values;
    vi cutSizes;
    vii table;

    PipeCut(int n, int m) : m_n(n), m_max(m) {
        values = vi(n);
        cutSizes = vi(n);
        table = vii(n + 1);
        initialize_table();
    }

    void initialize_table() {
        for (int i = 0; i < m_n; i++) {
            table[i] = vi(m_max + 1);
            for (int j = 0; j < m_max + 1; j++)
                table[i][j] = -1;
        }
    }

    int cutPipes(int size) {
        return _cut(0, size);
    }

    int _cut(int idx, int size) {
        if (idx == m_n || size == 0)
            return 0;
        else if (size < 0)
            return -m_max;
        else if (table[idx][size] == -1) {
            int incIdx = _cut(idx + 1, size);
            int decSize = _cut(idx, size - cutSizes[idx]);
            table[idx][size] = max(incIdx, values[idx] + decSize);
        }
        return table[idx][size];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c, v;
    while (cin >> n >> m) {
        PipeCut pc(n, m);
        for (int i = 0; i < n; i++)
            cin >> pc.cutSizes[i] >> pc.values[i];
        cout << pc.cutPipes(m) << endl;
    }
    return 0;
}
