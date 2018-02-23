#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ct = 0;

    cin >> n;

    for (int i = 1; i <= (n / 2); i++)
        if ((n - i) % i == 0)
            ct++;

    cout << ct << endl;
    
    return 0;
}
