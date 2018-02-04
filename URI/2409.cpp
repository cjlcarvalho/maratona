#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, h, l;

    cin >> a >> b >> c >> h >> l;

    if ((a <= h && b <= l) || (a <= h && c <= l) ||
        (a <= l && b <= h) || (a <= l && c <= h) ||
        (b <= h && a <= l) || (b <= h && c <= l) ||
        (b <= l && a <= h) || (b <= l && c <= h) ||
        (c <= h && a <= l) || (c <= h && b <= l) ||
        (c <= l && a <= h) || (c <= l && b <= h))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
