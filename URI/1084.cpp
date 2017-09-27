#include <bits/stdc++.h>

using namespace std;


int solve(int vet[], int n, int i, int d){
    if(n == 0 || i > d)
        return 0;
    else {
        int base = 1;
        for(int j = 1; j<i; j++) base *= 10;
        return max(vet[n-1] * base + solve(vet, n-1, i+1, d), solve(vet, n-1, i, d));
    }
}

int main(){
    int n, d;
    string x;
    while(cin >> n >> d){
        if(!n && !d) break;
        cin.ignore();
        int vet[n];
        getline(cin, x);
        for(int i = n-1; i >= 0; i--)
            vet[i] = x[i] - 48;
        cout << solve(vet, n, 1, n - d) << endl;
    }
    return 0;
}
