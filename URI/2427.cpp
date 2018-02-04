#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, result = 1;
    cin >> l;
    while (l >= 2) {
        l /= 2;
        result *= 4;
    }
    cout << result << endl;
    return 0;
}
