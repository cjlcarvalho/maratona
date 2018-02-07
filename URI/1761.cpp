#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cout << fixed << setprecision(2);
    while (cin >> a >> b >> c)
        cout << 5 * ((tan(a * (3.141592654/180)) * b) + c) << endl;
    return 0;
}
