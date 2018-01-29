#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b, a || b) {
        bool vetA[100000], vetB[100000];
        
        memset(vetA, false, sizeof(vetA));
        memset(vetB, false, sizeof(vetB));

        for (int i = 0; i < a; i++) {
            cin >> c;
            vetA[c-1] = true;
        }

        for (int i = 0; i < b; i++) {
            cin >> c;
            vetB[c-1] = true;
        }

        int qtA = 0, qtB = 0;

        for (int i = 0; i < 100000; i++) {
            if (vetA[i] && !vetB[i])
                qtB++;
            else if(!vetA[i] && vetB[i])
                qtA++;
        }

        cout << min(qtA, qtB) << endl;
        
    }

    return 0;
}
