#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    int n;
    while(cin >> n){
        ull vet[n];
        ull sum = 0;
        for(int i = 0; i<n; i++){
            cin >> vet[i];
            sum += vet[i];
        }
        ull total = sum / 2;
        ull sum2 = 0;
        for(int i = 0; i<n; i++){
            if(sum2 + vet[i] > total)
                break;
            sum2 += vet[i];
        }
        cout << (sum - total) - sum2 << endl;
    }
    return 0;
}
