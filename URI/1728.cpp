#include <bits/stdc++.h>

using namespace std;

int invert(char *n) {
    reverse(n, n + strlen(n));
    long x = atol(n);
    int bs = 1, result = 0;
    while (x) {
        result += (x%10) * bs;
        bs *= 10;
        x /= 10;
    }
    return result;
}

int main() {
    char n[8], m[8], o[8];
    memset(n, 0, sizeof(n));
    memset(m, 0, sizeof(m));
    memset(o, 0, sizeof(o));
    while (scanf(" %[^+] + %[^=] = %[^\n]", n, m, o)) {
        if (invert(n) + invert(m) == invert(o))
            cout << "True" << endl;
        else
            cout << "False" << endl;
        if (!strcmp(n, "0") && !strcmp(m, "0") && !strcmp(o, "0")) break;
    }
    return 0;
}
