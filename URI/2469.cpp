#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int freq = -1;
    int k = -1;
    int vet[n];
    for(int i = 0; i<n; i++) cin >> vet[i];
    for(int i = 0; i<n; i++){
        int temp = 0;
        for(int j = 0; j<n; j++)
            if(vet[j] == vet[i])
                temp++;
        if(temp > freq){
            freq = temp;
            k = i;
        }
        else if(temp == freq && vet[i] > vet[k]){
            freq = temp;
            k = i;
        }
    }
    cout << vet[k] << endl;
    return 0;
}
