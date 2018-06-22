#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) cin >> vet[i];

    int result = 0;

    for (int i = 0; i < n; i++) {
        int j = i;
        int l = i + 1;
        int diff = (l < n) ? abs(vet[j] - vet[l]) : 0;

        for (; l < n && abs(vet[j] - vet[l]) == diff; l++)
            j = l;

        result++;
        i = (l == n) ? j : j - 1;
    }

    cout << result << endl;
    
    return 0;
}
