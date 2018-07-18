#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--) {
        int m, c;
        cin >> m;

        vector<int> impares;

        while (m--) {
            cin >> c;

            if (c % 2) impares.push_back(c);
        }

        sort(impares.begin(), impares.end());

        int i = 0;
        int j = impares.size() - 1;

        while (i <= j) {
            if (i == j) cout << impares[i];
            else {
                cout << impares[j] << " ";
                cout << impares[i];
            }

            i++;
            j--;

            if (i <= j) cout << " ";
        }
        
        cout << "\n";
    
    }

    return 0;
}
