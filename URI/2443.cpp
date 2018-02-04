#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    int mn = min(a, b);

    for (int i = mn; i >= 2; i--)
        if (a % i == 0 && b % i == 0)
            return i;

    return -1;
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int e;

    if (b != d)
        e = (((b * d) / b) * a) + (((b * d) / d) * c);
    else
        e = a + c;

    int m;
    
    if (b != d)
        m = mdc(e, b*d);
    else
        m = mdc(e, b);

    int f, g;

    if (m != -1) {
        f = e / m;
        if (b != d)
            g = (b*d) / m;
        else
            g = b / m;
    }
    else {
        f = e;
        if (b != d)
            g = b*d;
        else
            g = b;
    }

    cout << f << " " << g << endl;

    return 0;
}
