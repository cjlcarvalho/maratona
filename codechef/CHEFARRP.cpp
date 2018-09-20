#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--) {
		int n;

		cin >> n;

		int vet[n];

		for (int i = 0; i < n; i++) cin >> vet[i];

		int result = n;

		for (int i = 2; i <= n; i++) {
			for (int k = 0; k < n; k++) {
				int p = 1, s = 0;
				for (int j = k; j < k + i; j++) {
					p *= vet[j];
					s += vet[j];
				}
				if (s == p) result++;
			}
		}

		cout << result << endl;
	}

	return 0;
}
