#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    set<int> s;
    cin >> n;
    while (n--) {
        cin >> c;
        s.insert(c);
    }
    cout << s.size() << endl;
    return 0;
}
