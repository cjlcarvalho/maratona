#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;
    int c = 1;

    cout << fixed << setprecision(2);
    while (cin >> a >> b)
        cout << "Projeto " << c++ << ":" << endl << "Percentual dos juros da aplicacao: " << ((b - a) / a) * 100 << " %" << endl << endl;

    return 0;
}
