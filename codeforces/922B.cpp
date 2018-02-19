#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result = 0;

    cin >> n;

    result = 0;

    for (int i = 3; i <= (n * 2/3); i++)
        for (int j = i + 2; j <= (n - 1); j++)
            if ((i ^ j) < (i + j) && (i ^ j) <= n && (i ^ j) > j)
                result++;

    cout << result << endl;

    return 0;
}
