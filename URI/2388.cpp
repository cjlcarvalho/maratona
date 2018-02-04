#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    int result = 0;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        result += a * b;
    }
    cout << result << endl;
    return 0;
}
