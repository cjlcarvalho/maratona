#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> vet(n);
        for (int i = 0; i < n; i++) cin >> vet[i];
        sort(vet.begin(), vet.end());
        int result = 0;
        while (vet.size() > 1) {
            result += abs(vet[vet.size() - 1] - vet[0]);
            vet.erase(vet.begin());
            vet.erase(vet.end() - 1);
        }
        cout << result << endl;
    }
    return 0;
}
