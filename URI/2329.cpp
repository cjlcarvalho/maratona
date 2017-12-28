#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    ull n, m, sum = 0, temp;
    cin >> n >> m;
    ull vet[m];
    for(ull i = 0; i<m; i++){
        cin >> vet[i];
        sum += vet[i];
    }
    ull cont = sum / n;
    while(cont){
        temp = 0;
        for(ull i = 0; i<m; i++)
            temp += (vet[i] / cont);
        if(temp >= n) break;
        cont--;
    }
    cout << cont << endl;
    return 0;
}
