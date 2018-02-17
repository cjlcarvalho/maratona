#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, result, sum;
    
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;

        int vet[n];
        for (int j = 0; j < n; j++) cin >> vet[j];
        
        sort(vet, vet + n);

        result = -1;
        do {
            sum = 0;
            for (int j = 0; j < n - 1; j++)
                sum += abs(vet[j] - vet[j + 1]);
            if (sum > result) result = sum;
        } while (next_permutation(vet, vet + n));

        cout << "Case " << i << ": " << result << endl;
    }
    
    return 0;
}
