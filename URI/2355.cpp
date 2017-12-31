#include <bits/stdc++.h>

using namespace std;

int main(){
    double n;
    while(cin >> n, n)
        cout << "Brasil " << int(floor(n/90)) << " x Alemanha " << int(ceil((n/90)*7)) << endl;
    return 0;
}
