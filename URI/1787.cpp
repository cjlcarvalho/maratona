#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, u, r, i, a, b, c;

    while (cin >> n, n) {
        u = r = i = 0;
        for (int j = 0; j < n; j++) {
            cin >> a >> b >> c;
            if (!(a & (a-1))) {
                u++;
                if (a > b && a > c)
                    u++;
            }
            if (!(b & (b-1))) {
                r++;
                if (b > a && b > c)
                    r++;
            }
            if (!(c & (c-1))) {
                i++;
                if (c > a && c > b)
                    i++;
            }
        }
        if (u > r && u > i)
            cout << "Uilton" << endl;
        else if (r > u && r > i)
            cout << "Rita" << endl;
        else if (i > r && i > u)
            cout << "Ingred" << endl;
        else
            cout << "URI" << endl;
    }

    return 0;
}
