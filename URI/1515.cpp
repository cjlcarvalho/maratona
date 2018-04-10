#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while (cin >> n, n) {

        string s, res;
        int anoR, qtAnos;
        int minAn = -1;

        for (int i = 0; i < n; i++) {
            cin.ignore();
            cin >> s >> anoR >> qtAnos;

            if (minAn == -1) {
                res = s;
                minAn = anoR - qtAnos;
            }
            else if ((anoR - qtAnos) < minAn) {
                res = s;
                minAn = anoR - qtAnos;
            }
        }

        cout << res << endl;
    }

    return 0;
}
