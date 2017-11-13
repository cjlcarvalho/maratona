#include <bits/stdc++.h>

using namespace std;

int main(){
    double m, p, j, x;
    int total;
    cin >> m >> p >> j >> x;
    total = (m - (m * (p/100))) / x;
    cout << total << endl;
    return 0;
}
