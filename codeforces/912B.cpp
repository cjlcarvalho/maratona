#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main()
{
    ull n, k;
    cin >> n >> k;

    if (k == 1)
        cout << n << endl;
    else {
        ull cont = 1;
        ull current = 1;
        ull i = 2;

        for (; i <= n; i <<= 1) {
            current ^= i;
            cont++;
        }

        if (cont < k) {
            for (; i <= n; i++) {
                if ((current ^ i) >= current) {
                    current ^= i;
                    cont++;
                }
            }
        }

        cout << current << endl;
    }
    
    return 0;
}
