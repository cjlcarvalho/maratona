#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll a, b;
    while(cin >> a >> b){
        if(a == b) cout << 4 << endl;
        else if(a % 2 == 0 && b % 2 == 0) cout << (a + b) << endl;
        else cout << a*2 + b*2 << endl;
    }
    return 0;
}
