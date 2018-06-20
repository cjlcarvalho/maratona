#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vet[4];

    for (int i = 0; i < 4; i++)
        cin >> vet[i];

    for (int i = 0; i < 4; i++)
        if (vet[i]) {
            cout << i + 1 << endl;
            break;
        }

    return 0;
}
