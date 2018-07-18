#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    if (a <= b) {
        cout << a << endl;
        cout << b << endl;
    }
    else {
        cout << b << endl;
        cout << a << endl;
    }

    return 0;
}
