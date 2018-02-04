#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n;

    int j = 1;
    
    while (cin >> n) {
        uint64_t total = 1;
        for (uint64_t i = 2; i <= n; i++) {
            uint64_t r = i;
            while (r % 10 == 0)
                r /= 10;
            total = ((total % 10000000L) * (i % 10000000L));
            while(total % 10 == 0)
                total /= 10;
        }

        while (total % 10 == 0)
            total /= 10;

        cout << "Instancia " << j++ << endl;
        cout << total % 10 << endl;
    }

    return 0;
}
