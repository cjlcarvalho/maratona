#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    bool find = false;

    int i;

    for (i = a; i <= c; i++)
        if ((i % a == 0) && (i % b != 0) && (c % i == 0) && (d % i != 0)) {
            find = true;
            break;
        }

    if (find)
        cout << i << endl;
    else
        cout << -1 << endl;

    return 0;
}
