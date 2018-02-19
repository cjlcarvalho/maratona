#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;

    a -= x * 2;

    a -= y;
    b -= y;

    b -= z * 3;

    if (a < 0 && b < 0)
        cout << -(a + b) << endl;
    else if (a < 0)
        cout << -a << endl;
    else if (b < 0)
        cout << -b << endl;
    else
        cout << 0 << endl;

    return 0;
}
