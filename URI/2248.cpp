#include <bits/stdc++.h>

using namespace std;

struct Aluno
{
    int id;
    int nota;
};

bool compare(Aluno a, Aluno b)
{
    if (a.nota > b.nota)
        return true;
    return false;
}

int main()
{
    int n, a, b, c = 1;

    while (cin >> n, n) {

        vector<Aluno> v;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            v.push_back({a, b});
        }

        stable_sort(v.begin(), v.end(), compare);

        cout << "Turma " << c++ << endl;
        cout << v[0].id << " ";

        unsigned int i = 1;

        while (v[i].nota == v[0].nota && i < v.size())
            cout << v[i++].id << " ";

        cout << endl << endl;
    }

    return 0;
}
