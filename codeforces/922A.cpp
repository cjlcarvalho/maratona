#include <bits/stdc++.h>

using namespace std;

int main()
{
    long c, o;

    cin >> c >> o;

    if (!(o - 1) && c) cout << "No" << endl;
    else if (o && (c - (o - 1)) >= 0 && (c - (o - 1)) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
