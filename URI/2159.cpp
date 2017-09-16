#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(1);
    cout << n / log(n) << " " << (1.25506 * (n / log(n))) << endl;
    return 0; 
}
