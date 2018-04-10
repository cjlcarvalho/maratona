#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    while (n--) {
        set<string> st;
        string s;
    
        getline(cin, s);

        for (unsigned int i = 0; i < s.size(); i++) {
            unsigned int j = i;
            while (s[j] != ' ' && j < s.size())
                j++;
            st.insert(s.substr(i, j - i));
            i = j;
        }

        for (auto it = st.begin(); it != st.end(); it++) {
            cout << *it;
            if (next(it, 1) == st.end())
                cout << endl;
            else
                cout << " ";
        }
    }

    return 0;
}
