#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int vet[k - 1];

    for (int i = 0; i < k - 1; i++) vet[i] = i + 1;

    int result = -1, temp;

    for (int i = k - 2; i >= 0; i--) {
        temp = 0;
        
        for (int j = 0; j < (k - 2); j++) {
            for (int l = j + 1; l < (k - 1); l++)
                if (vet[l] % vet[j] == 0) {
                    cout << vet[j] << " " << vet[l] << endl;
                    temp++;
                }
        }

        if (temp == k) {
            result = temp;
            break;
        }

        vet[i]++;
    }

    if (result == -1)
        cout << "No" << endl;
    else {
        cout << "Yes" << endl << result << endl;
        for (int i = 0; i < (k - 1); i++) {
            cout << vet[i];
            if (i == k - 2) cout << endl;
            else cout << " ";
        }
    }

    return 0;
}
