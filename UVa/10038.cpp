#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int vet[n];

        for (int i = 0; i < n; i++) cin >> vet[i];

        bool b[n-1];

        memset(b, false, sizeof(b));

        for (int i = 0; i < n - 1; i++)
            b[abs(vet[i] - vet[i + 1]) - 1] = true;

        bool f = false;

        for (int i = 0; i < n - 1 && !f; i++)
            if (!b[i])
                f = true;

        if (f)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;
    }
    return 0;
}
