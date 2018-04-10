#include <bits/stdc++.h>

using namespace std;

int attr(double iv, double bs, double ev, int l) 
{
    return (((iv + bs + sqrt(ev)/8) * l) / 50) + 5;
}

int hp(double iv, double bh, double ev, int l) 
{
    return (((iv + bh + sqrt(ev)/8 + 50) * l)/50) + 10;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s;
        int l;
        double bs, iv, ev;
        
        cin.ignore();
        cin >> s >> l;

        cout << "Caso #" << i << ": " << s << " nivel " << l << endl;

        for (int j = 0; j < 4; j++) {
            cin >> bs >> iv >> ev;

            if (j == 0)
                cout << "HP: " << hp(iv, bs, ev, l) << endl;
            else if (j == 1)
                cout << "AT: " << attr(iv, bs, ev, l) << endl;
            else if (j == 2)
                cout << "DF: " << attr(iv, bs, ev, l) << endl;
            else if (j == 3)
                cout << "SP: " << attr(iv, bs, ev, l) << endl;
        }
    }

    return 0;
}
