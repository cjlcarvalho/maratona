#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n;

    while (n--) {
        cin >> a >> b;

        for (int i = 0; i < a; i++) {
            int total = 0;

            for (int j = 1; j <= b; j++)
                total += j;

            b = total;
        }

        cout << b << endl;
    }

    return 0;
}
