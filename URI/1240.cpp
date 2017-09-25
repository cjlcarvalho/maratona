#include <bits/stdc++.h>

using namespace std;

int qtDigitos(int64_t n){
    int total = 0;
    while(n){
        total++;
        n /= 10;
    }
    return total;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int64_t a, b;
        cin >> a >> b;
        int base = 1, q = qtDigitos(b);
        for(int i = 0; i<q; i++) base *= 10;
        if(b == a % base) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}
