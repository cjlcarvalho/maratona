#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);

        int total = 0;
        for (char c : s) {
            if (c >= '0' && c <= '9')
                total += c - 48;
        }

        cout << total << endl;
    }

    return 0;
}
