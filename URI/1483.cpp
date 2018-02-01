#include <bits/stdc++.h>

using namespace std;

int main() {
    double v, r;
    int n, m;

    while(cin >> v >> n >> m, v || n || m) {
        r = 0;
        if (n % 10000 == m % 10000)
            r = v * 3000;
        else if (n % 1000 == m % 1000)
            r = v * 500;
        else if (n % 100 == m % 100)
            r = v * 50;
        else {
            int c = n % 100;
            int d = m % 100;

            if (c == 0)
                c = 25;
            else if (c % 4 == 0)
                c = (c / 4) - 1;
            else
                c = c / 4;

            if (d == 0)
                d = 25;
            else if (d % 4 == 0)
                d = (d/4) - 1;
            else
                d = d / 4;

            if (c == d)
                r = v * 16;
        }
        cout << fixed << setprecision(2);
        cout << r << endl;
    }

    return 0;
}
