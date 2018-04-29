#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c, n, m;

    cin >> c;

    while (c--) {
        cin >> n >> m;

        cout << int(ceil(n / m)) << endl;
    }

    return 0;
}
