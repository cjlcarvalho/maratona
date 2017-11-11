#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, maior, menor, t = 1;
    cin >> n;
    while(n--){
        cin >> x;
        int vet[x];
        for(int i = 0; i<x; i++) cin >> vet[i];
        for(int i = 0; i<x; i++){
            maior = menor = 0;
            for(int j = 0; j<x; j++){
                if(i != j){
                    if(vet[i] > vet[j]) menor++;
                    else if(vet[i] < vet[j]) maior++;
                }
            }
            if(maior == menor){
                cout << "Case " << t << ": " << vet[i] << endl;
                break;
            }
        }
        t++;
    }
    return 0;
}
