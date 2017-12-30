#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll primeFactor(ll n){
    if(n % 2 == 0) return 2;
    for(ll i = 3; i <= sqrt(n); i += 2)
        if(n % i == 0) return i;
    return n;
}

ll countPF(ll n){
    ll p = 0;
    while(n > 1){
        p = primeFactor(n);
        n /= p;
    }
    return p;
}

int main(){
    ll n, p;
    while(cin >> n, n){
        p = countPF(n);
        if(p == n) cout << "-1" << endl;
        else cout << p << endl;
    }
    return 0;
}
