#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i<n; i++) cin >> vet[i];
    bool vale = false, exist = true;
    if(n > 1){
        if(vet[0] > vet[1]) vale = true;
        else if(vet[0] == vet[1]) exist = false;
    }
    for(int i = 2; i<n; i++){
        if(vet[i] == vet[i-1]) exist = false;
        if(vale){
            if(vet[i] < vet[i-1]) exist = false;
            else vale = false;
        }
        else{
            if(vet[i] > vet[i-1]) exist = false;
            else vale = true;
        }
    }
    cout << exist << endl;
    return 0;
}
