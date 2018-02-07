#include <bits/stdc++.h>

using namespace std;

int main() {
    double d, vf, vg;

    while (cin >> d >> vf >> vg) {
        if ((12/vf) >= (hypot(12, d) / vg))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
