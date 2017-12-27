#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    string vet[n];
    for(int i = 0; i<n; i++) cin >> vet[i];
    sort(vet, vet + n);
    cout << vet[m - 1] << endl;
    return 0;
}
