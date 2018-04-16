#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c, a || b || c)
        cout << int(pow(a * b * c, 1.0/3)) << endl;

    return 0;
}
