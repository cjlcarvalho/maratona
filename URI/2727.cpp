#include <bits/stdc++.h>

using namespace std;

char character(string s)
{
    int qtEspacos = 0;

    for (char c : s)
        if (c == ' ')
            qtEspacos++;

    int qtPontos = 0;

    for (unsigned int i = 0; i < s.size() && s[i] != ' '; i++)
        qtPontos++;

    return qtEspacos * 3 + qtPontos + 96;
}

int main()
{
    int n;

    while (cin >> n) {
        cin.ignore();
        string s;
        for (int i = 0; i < n; i++) {
            getline(cin, s);

            cout << character(s) << endl;
        }
    }

    return 0;
}
