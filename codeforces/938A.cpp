#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    string result;
    for (int i = 0; i < n; i++) {
        result.push_back(s[i]);
        if (isVowel(s[i])) {
            while (isVowel(s[i]) && i < n) i++;
            i--;
        }
    }
    cout << result << endl;
    return 0;
}
