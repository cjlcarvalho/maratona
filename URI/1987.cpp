#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, m, soma;
    while(cin >> n >> m){
        soma = 0;
        for(int64_t i = 0; i<n; i++, m /= 10) soma += m % 10;
        cout << soma;
        if(soma % 3) cout << " nao" << endl;
        else cout << " sim" << endl;
    }
    return 0;
}
