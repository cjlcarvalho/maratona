#include <bits/stdc++.h>

using namespace std;

unsigned long calculate(string s)
{
    unsigned long result = 0;

    unsigned long cont = 1;

    for (unsigned int i = 0; i < s.size(); i++)
        if (s[i] == 'S')
            result += cont;
        else if (s[i] == 'C')
            cont *= 2;

    return result;
}

int main()
{
    unsigned int n, p;
    string s;

    cin >> n;

    for (unsigned int i = 1; i <= n; i++) {
        cin >> p >> s;

        unsigned long cont = 0;
        unsigned long total = calculate(s);

        while (true) {
            if (total <= p)
                break;

            int j = s.size() - 1;

            while (s[j] == 'C' && j >= 0) j--;

            while (s[j] == 'S' && j >= 0) j--;
            
            // Chegou no C ou S mais a esquerda
            if (j < 0) break;

            swap(s[j], s[j + 1]);

            cont++;

            total = calculate(s);
        }
        
        cout << "Case #" << i << ": ";
        if (total > p)
            cout << "IMPOSSIBLE" << endl;
        else
            cout << cont << endl;

    }

    return 0;
}
