#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, p;
    float r;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> p;
        float vet[n];
        float **mat = new float*[n];
        for (int j = 0; j < n; j++) cin >> vet[j];
        for (int j = 0; j < n; j++) {
            mat[j] = new float[p];
            for (int k = 0; k < p; k++)
                cin >> mat[j][k];
            sort(mat[j], mat[j] + p);
        }
        bool check[p];
        memset(check, true, sizeof(check));
        double dcheck[p];
        memset(dcheck, 0, sizeof(dcheck));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                r = round(mat[j][k] / vet[j]);
                if ((mat[j][k] < (vet[j] * r * 0.9F)) || (mat[j][k] > (vet[j] * r * 1.1F)))
                    check[k] = false;
                else if (dcheck[k]) {
                    if (dcheck[k] != r)
                        check[k] = false;
                }
                else
                    dcheck[k] = r;
            }
        }
        int cont = 0;
        for (int j = 0; j < p; j++) if (check[j]) cont++;
        cout << "Case #" << i << ": " << cont << endl;
    }
    return 0;
}
