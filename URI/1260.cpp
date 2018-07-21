#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    bool start = false;

    cin >> n;
    cin.ignore();
    
    getline(cin, s);

    while (n--) {

        if (!start) start = true;
        else cout << endl;
        
        map<string, double> m;
        double cont = 0;

        while (getline(cin, s)) {
            if (s.empty()) break;

            if (!m.count(s))
                m[s] = 1.0;
            else
                m[s]++;

            cont++;
        }

        cout << fixed << setprecision(4);

        for (auto it = m.begin(); it != m.end(); it++)
            cout << it->first << " " << (it->second / cont) * 100 << endl;

    }

    return 0;
}
