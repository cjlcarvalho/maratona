#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        cin.ignore();
        string vet[n];
        for(int i = 0; i<n; i++) getline(cin, vet[i]);
        sort(vet, vet + n);
        for(int i = 0; i<n; i++) cout << vet[i] << endl;
    }
    return 0;
}
