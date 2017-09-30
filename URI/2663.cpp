#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int n, m;
    cin >> n >> m;
    int vet[n];
    for(int i = 0; i<n; i++) cin >> vet[i];
    sort(vet, vet + n, compare);
    int cont = m, i = m;
    while(vet[i++] == vet[m-1])
        cont++;
    cout << cont << endl;
    return 0;
}
