#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, soma = 0;
    cin >> n;
    while(n){
        cin >> a;
        soma += a;
        n--;
    }
    cout << soma << endl;
    return 0;
}
