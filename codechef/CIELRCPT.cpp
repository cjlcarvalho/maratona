#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--) {
        int a;
        cin >> a;

        int result = INT_MAX;

        for (int i = 12; i >= 1; i--) {
            int _ = a;
            
            int count = 0;

            for (int j = i; j >= 1; j--) {
                int p = pow(2, j - 1);

                if (_ >= p) {
                    count += _ / p;
                    _ %= p;
                }
            }

            if (!_ && count < result) result = count;
        }

        cout << (result == INT_MAX ? 0 : result) << endl;
    }

    return 0;
}
