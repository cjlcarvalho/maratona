#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m;
    cin >> n;
    while(n--){
        cin >> m;
        ll result = ((((((m * 567)/9) + 7492)*235)/47) - 498);
        result /= 10;
        cout << abs(result % 10) << endl;
    }
    return 0;
}
