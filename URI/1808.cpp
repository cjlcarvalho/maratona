#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    double media, total;

    total = media = 0;

    for (unsigned int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            if (s[i] == '0' || (s[i] >= '2' && s[i] <= '9'))
                media += (s[i] - 48);
            else {
                if ((i + 1 < s.size()) && s[i+1] == '0') {
                    media += 10;
                    i++;
                }
                else
                    media += 1;
            }
            total++;
        }
    }

    cout << fixed << setprecision(2);
    cout << media / total << endl;

    return 0;
}
