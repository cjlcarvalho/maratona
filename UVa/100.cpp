#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

ull cycle(ull n)
{
    ull cont = 1;

    while (n != 1)
    {
        if (n % 2)
            n = (3 * n) + 1;
        else
            n /= 2;

        cont++;
    };

    return cont;
}

int main()
{
    ull n, m, c;

    while (cin >> n >> m)
    {
        c = 0;

        ull a, b;

        a = min(n, m);
        b = max(n, m);

        for (ull i = a; i <= b; i++)
            c = max(cycle(i), c);

        cout << n << " " << m << " " << c << endl;
    }

    return 0;
}
