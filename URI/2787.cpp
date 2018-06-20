#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    bool c = b % 2;

    do {
        c = !c;
    } while (a--);

    cout << c << endl;

    return 0;
}
