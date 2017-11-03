#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t a, b, n, k;
    cin >> a >> b >> n >> k;
    int64_t c = pow(a + sqrt(b), n);
    while(k > 1){
        c /= 10;
        k--;
    }
    cout << c << endl;
    cout << c % 10 << endl;
    return 0;
}
