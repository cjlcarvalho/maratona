#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    double a, b, c;
    
    while (cin >> t, t) {
        for (int i = 1; i<=t; i++) {
            cin >> a >> b >> c;
            cout << fixed << setprecision(2);
            cout << "Size #" << i << ":" << endl;
            cout << "Ice Cream Used: " << (((b + c) / 2) * 5) * a << " cm2" << endl;
        }
        cout << endl;
    }

    return 0;
}
