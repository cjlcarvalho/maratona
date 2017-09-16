#include <bits/stdc++.h>

using namespace std;

bool isPrime(int64_t n){
    if(n < 2) return false; // se for menor que 2
    if(n <= 3) return true; // se for 2 ou 3
    if(!(n%2) || !(n%3)) return false; // se n%2 ou n%3 derem 0
    for(int64_t i = 5; i*i <= n; i+=6)
        if(!(n%i) || !(n%(i+2))) return false;
    return true;
}

int main(){
    int n;
    int64_t x;
    cin >> n;
    while(n--){
        cin >> x;
        if(isPrime(x)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}
