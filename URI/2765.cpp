#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    unsigned int i;
    for (i = 0; i < s.size() && s[i] != ','; i++)
        cout << s[i];

    cout << endl;

    i++;

    for (; i < s.size(); i++)
        cout << s[i];

    cout << endl;

    return 0;
}
