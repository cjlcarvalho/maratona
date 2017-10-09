#include <bits/stdc++.h>

using namespace std;

int solve(int v[], int t[], int n){
    int troca, result = 0;
    for(int i = 0; i<n; i++){
        int j = i;
        while(t[i] != v[j])
            j++;
        while(j != i){
            troca = v[j];
            v[j] = v[j-1];
            v[j-1] = troca;
            result++;
            j--;
        }
    }
    return result;
}

int main(){
    int n;
    while(cin >> n){
        int v[n], t[n];
        for(int i = 0; i<n; i++) cin >> v[i];
        for(int i = 0; i<n; i++) cin >> t[i];
        cout << solve(v, t, n) << endl;
    }
    return 0;
}
