#include <bits/stdc++.h>

using namespace std;

int somaDiv(int n) {
    int result = 1;

    if (n % 2 == 0)
        result += 2;

    if (n % 3 == 0)
        result += 3;

    for (int i = 5; i <= n / 2; i+=2) {
        if (n % i == 0)
            result += i;
    }

    return result;
}

int main() {
    int x, y, sx, sy;

    bool a, b;

    while (cin >> x >> y, x || y) {
        a = b = false;
        sx = somaDiv(x);
        sy = somaDiv(y);
        if (sx == y || y % sx == 0)
            a = true;
        if (sy == x || x % sy == 0)
            b = true;
        if (a && b) 
            cout << "Friends and lovers <3" << endl;
        else if (sx == sy)
            cout << "Almost lovers!" << endl;
        else if (!a && b)
            cout << x << " friendzoned " << y << "!" << endl;
        else if (!b && a)
            cout << y << " friendzoned " << x << "!" << endl;
        else
            cout << "No connection." << endl;

    }

    return 0;
}
