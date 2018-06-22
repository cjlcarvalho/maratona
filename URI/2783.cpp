#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c, m;

    cin >> n >> c >> m;

    int car[c];
    int minh[m];

    for (int i = 0; i < c; i++) cin >> car[i];
    for (int i = 0; i < m; i++) cin >> minh[i];

    int result = 0;
    bool flag;

    for (int i = 0; i < c; i++) {
        flag = false;

        for (int j = 0; j < m && !flag; j++)
            if (minh[j] == car[i])
                flag = true;

        if (!flag)
            result++;
    }

    cout << result << endl;

    return 0;
}
