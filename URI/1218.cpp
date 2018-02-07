#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;

    int t = 1;

    bool start = false;

    while (getline(cin, a)) {

        if (start)
            cout << endl;
        else
            start = true;

        getline(cin, b);

        int f = 0, m = 0;

        for (unsigned int i = 0; i < b.size(); i++) {
            if (b.substr(i, 2) == a) {
                if (b[i + 3] == 'M')
                    m++;
                else if (b[i + 3] == 'F')
                    f++;
                i += 4;
            }
        }

        cout << "Caso " << t << ":" << endl;
        cout << "Pares Iguais: " << f + m << endl;
        cout << "F: " << f << endl;
        cout << "M: " << m << endl;
        
        t++;
    }

    return 0;
}
