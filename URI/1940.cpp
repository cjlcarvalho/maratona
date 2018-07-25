#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j, r, c;

    cin >> j >> r;

    long pt[j];

    memset(pt, 0, sizeof(pt));

    for (int i = 0; i < j * r; i++) {
        cin >> c;
        pt[i % j] += c;
    }

    int max = 0;

    for (int i = 0; i < j; i++) {
        if (pt[i] >= pt[max])
            max = i;
    }

    cout << max + 1 << endl;

    return 0;
}
