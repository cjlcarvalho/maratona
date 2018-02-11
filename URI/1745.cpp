#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    int total = 0;

    for (unsigned int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]) && (s[i] - 48) % 3 == 0) {
            total++;
            unsigned int j = i + 1;
            while (j < s.size() && isdigit(s[j]) && stoi(s.substr(i, j - i)) % 3 == 0) {
                total++;
                j++;
            }
        }
    }
    
    cout << total << endl;

    return 0;
}
