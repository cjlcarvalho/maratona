#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    string s, t;

    cin >> n;

    cin.ignore();

    while (n--)
    {
        getline(cin, s);
        getline(cin, t);

        int min = 0;
        int max = 0;

        for (unsigned i = 0; i < s.size(); i++) {
            if (s[i] != '?' && t[i] != '?' && s[i] != t[i]) {
                min++;
                max++;
            }
            else if (s[i] == '?' || t[i] == '?')
                max++;
        }

        cout << min << " " << max << endl;
    }

    return 0;
}
