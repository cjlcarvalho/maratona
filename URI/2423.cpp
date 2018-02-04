#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(min(a/2, b/3), c/5) << endl;

    return 0;
}
