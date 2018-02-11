#include <bits/stdc++.h>

using namespace std;

bool leap(int n) {
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}

bool hulu(int n) {
    return n % 15 == 0;
}

bool bulukulu(int n) {
    return n % 55 == 0;
}

int main() {
    int n;
    bool find;

    while (cin >> n) {

        find = false;

        if (leap(n)) {
            cout << "This is leap year." << endl;
            find = true;
        }

        if (hulu(n)) {
            cout << "This is huluculu festival year." << endl;
            find = true;
        }

        if (bulukulu(n)) {
            cout << "This is bulukulu festival year." << endl;
            find = true;
        }

        if (!find)
            cout << "This is an ordinary year." << endl;

        cout << endl;
    }

    return 0;
}
