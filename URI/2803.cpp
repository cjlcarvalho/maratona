#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    if (s == "roraima" || s == "acre" || s == "amapa" || s == "amazonas" || s == "para" || s == "rondonia" || s == "tocantins")
        cout << "Regiao Norte\n";
    else
        cout << "Outra regiao\n";

    return 0;
}
