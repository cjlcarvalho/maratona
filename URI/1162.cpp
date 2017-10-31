#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int total = 0;
        int x;
        cin >> x;
        int vet[x];
        for(int i = 0; i<x; i++)
            cin >> vet[i];
        for(int i = x - 1; i >= 0; i--){
            for(int j = 0; j < i; j++){
                if(vet[j] > vet[j+1]){
                    swap(vet[j], vet[j+1]);
                    total++;
                }
            }
        }
        cout << "Optimal train swapping takes " << total << " swaps." << endl;
    }
    return 0;
}
