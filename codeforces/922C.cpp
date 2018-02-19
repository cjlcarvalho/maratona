#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, k;

    cin >> n >> k;

    bool find = false;
    
    for (unsigned long long i = 1; i <= k && !find; i++)
        if (n % i < (i - 1))
            find = true;

    if (find) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}
