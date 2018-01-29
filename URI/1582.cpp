#include <bits/stdc++.h>

using namespace std;

int mdc(int x, int y, int z) {
    int menor = min(min(x, y), z);

    int i = 0;

    for (i = 2; i <= menor; i++)
        if ((x % i == 0) && (y % i == 0) && (z % i == 0))
            break;

    if (i > menor) return 1;
    return i;
}

int main() {
    int x, y, z;

    while (cin >> x >> y >> z) {
        cout << "tripla";
        if ((x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == x*x + y*y)) {
            cout << " pitagorica";
            if (mdc(x, y, z) == 1) cout << " primitiva";
        }
        cout << endl;
    }

    return 0;

}
