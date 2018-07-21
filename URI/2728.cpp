#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string cobol = "cobol";
    unsigned int c;

    while (cin >> s) {
        c = 0;
        bool find;

        for (unsigned int i = 0; i < s.size() && c < cobol.size(); i++) {
            
            find = false;

            s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
            
            if (s[i] == cobol[c]) {
                c++;
                find = true;
            }

            while (s[i] != '-' && i < s.size())
                i++;
            
            s[i-1] = (s[i-1] >= 'A' && s[i-1] <= 'Z') ? s[i-1] + 32 : s[i-1];

            if (!find && s[i-1] == cobol[c])
                c++;
        }

        if (c == cobol.size())
            cout << "GRACE HOPPER" << endl;
        else
            cout << "BUG" << endl;
    }

    return 0;
}
