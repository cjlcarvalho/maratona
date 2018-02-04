#include <bits/stdc++.h>

using namespace std;

int main() {
    double num, cut;

    while (cin >> num >> cut) {
        cout << fixed << setprecision(0);
        if (fmod(num, 1) > cut)
            cout << (num - fmod(num, 1)) + 1 << endl;
        else
            cout << (num - fmod(num, 1)) << endl;
    }

    return 0;
}
