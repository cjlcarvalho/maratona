#include <bits/stdc++.h>

using namespace std;

int contar(int n){
    int64_t total, soma, cont = 1;
    int64_t x = (n % 2) ? (n/2) + 1 : n/2;
    for(int64_t i = x; i; i--){
        soma = 0;
        total = i;
        while(soma < n && total){
            soma += total;
            total--;
        }
        if(soma == n) cont++;
    }
    return cont;
}

int main(){
    int64_t n;
    while(cin >> n){
        cout << contar(n) << endl;
    }
    return 0;
}
