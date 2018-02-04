#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maior = -1;
    while(cin >> n, n) {
        if (n > maior)
            maior = n;
    }
    cout << maior << endl;
    return 0;
}
