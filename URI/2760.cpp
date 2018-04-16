#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    for (unsigned int i = 0; i < 10 && i < a.size(); i++) cout << a[i];
    for (unsigned int i = 0; i < 10 && i < b.size(); i++) cout << b[i];
    for (unsigned int i = 0; i < 10 && i < c.size(); i++) cout << c[i];
    cout << endl;

    return 0;
}
