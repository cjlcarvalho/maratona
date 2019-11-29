#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    float y;

    cin >> x >> y;

    if (x % 5 == 0 && (y - x - 0.5) >= 0)
        printf("%.2f\n", (y - x - 0.5));
    else
        printf("%.2f\n", y);

    return 0;
}
