#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cpf;

    cin >> cpf;

    cout << cpf.substr(0, 3) << endl;
    cout << cpf.substr(4, 3) << endl;
    cout << cpf.substr(8, 3) << endl;
    cout << cpf.substr(12, 2) << endl;

    return 0;
}
