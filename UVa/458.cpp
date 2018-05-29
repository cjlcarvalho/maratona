#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        for (char &c : s)
            c -= 7;

        cout << s << endl;
    }
    return 0;
}
