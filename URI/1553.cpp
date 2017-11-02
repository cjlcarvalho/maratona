#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[100];
    int n, k, p;
    while(cin >> n >> k){
        if(!n && !k) break;
        memset(vet, 0, sizeof(vet));
        while(n--){
            cin >> p;
            vet[p-1]++;
        }
        int cont = 0;
        for(int i = 0; i<100; i++) if(vet[i] >= k) cont++;
        cout << cont << endl;
    }
    return 0;
}
