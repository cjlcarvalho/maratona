#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;

    getline(cin, a);
    getline(cin, b);

    for (char &c : b)
        c = a[c-97];

    cout << b << endl;

    return 0;
}
