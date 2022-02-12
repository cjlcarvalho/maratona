#include <bits/stdc++.h>

using namespace std;

int m(int x) {
    switch (x) {
        case 100: return 11;
        case 90: return 6;
        case 80: return 6;
        case 70: return 7;
        case 60: return 5;
        case 50: return 5;
        case 40: return 5;
        case 30: return 6;
        case 20: return 6;
        case 19: return 8;
        case 18: return 8;
        case 17: return 9;
        case 16: return 7;
        case 15: return 7;
        case 14: return 8;
        case 13: return 8;
        case 12: return 6;
        case 11: return 6;
        case 10: return 3;
        case 9: return 4;
        case 8: return 5;
        case 7: return 5;
        case 6: return 3;
        case 5: return 4;
        case 4: return 4;
        case 3: return 5;
        case 2: return 3;
        case 1: return 3;
    };
    return 0;
}

int main() {
    int x;
    cin >> x;

    for (int i = 0; i < 100; i++) {
        if (!m(x))
            x = m(x - x % 10) + m(x % 10) + 1;
        else
            x = m(x);
    }
    cout << x << endl;
    return 0;
}
