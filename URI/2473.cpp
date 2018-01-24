#include <bits/stdc++.h>

using namespace std;

int main() {
    int flav[6], sortead[6];
    int sum = 0;

    for(int i = 0; i < 6; i++) cin >> flav[i];
    for(int i = 0; i < 6; i++) cin >> sortead[i];

    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++) {
            if(flav[i] == sortead[j]) {
                sum++;
                break;
            }
        }

    if(sum == 6) cout << "sena";
    else if(sum == 5) cout << "quina";
    else if(sum == 4) cout << "quadra";
    else if(sum == 3) cout << "terno";
    else cout << "azar";
    cout << endl;
    return 0;
}
