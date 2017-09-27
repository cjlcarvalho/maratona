#include <bits/stdc++.h>

using namespace std;

int mochila(int m, int vet[], int n, int total){
    if(n == 0 || m == 0)
        return total;
    else if(vet[n-1] > m)
        return mochila(m, vet, n-1, total);
    else{
        cout << total << endl;
        m -= vet[n-1];
        int a = mochila(m, vet, n, total+1);
        int b = mochila(m, vet, n-1, total+1);
        cout << "a " << a << " b " << b << endl;
        return min(a, b);
    
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int vet[n];
        for(int i = 0; i<n; i++) cin >> vet[i];
        cout << mochila(m, vet, n, 0) << endl;
    }
    return 0;
}
