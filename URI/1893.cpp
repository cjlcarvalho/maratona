#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    
    if (b >= 0 && b <= 2)
        cout << "nova" << endl;
    else if (b - a >= 0) {
        if (b >= 3 && b <= 96)
            cout << "crescente" << endl;
        else
            cout << "cheia" << endl;
    }
    else if (b >= 3 && b <= 96)
        cout << "minguante" << endl;
    else cout << "cheia" << endl;
    
    return 0;
}
