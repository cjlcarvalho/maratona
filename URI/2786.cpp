#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, c;

    cin >> l >> c;

    cout << (l * c) + ((c -1) * (l - 1)) << endl;
    cout << ((l - 1) * 2) + ((c - 1) * 2) << endl;

    return 0;
}
