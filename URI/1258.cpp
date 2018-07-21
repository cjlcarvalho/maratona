#include <bits/stdc++.h>

using namespace std;

struct Solicitacao {
    string cor;
    char tam;
    string nome;
};

bool compare(Solicitacao a, Solicitacao b) {
    if (a.cor < b.cor)
        return true;
    else if (a.cor == b.cor) {
        if (a.tam == b.tam)
            return a.nome <= b.nome;
        else if (a.tam == 'P' && b.tam != 'P')
            return true;
        else if (a.tam == 'M' && b.tam == 'G')
            return true;
    }
    return false;
}

int main()
{
    int n;

    bool start = false;

    while (cin >> n, n) {
        
        if (!start) start = true;
        else cout << endl;

        cin.ignore();

        vector<Solicitacao> v;

        string cor, nome;
        char tam;

        while (n--) {
            getline(cin, nome);
            cin >> cor >> tam;
            cin.ignore();

            v.push_back({cor, tam, nome});
        }

        sort(v.begin(), v.end(), compare);

        for (Solicitacao &s : v)
            cout << s.cor << " " << s.tam << " " << s.nome << endl;

    }

    return 0;
}
