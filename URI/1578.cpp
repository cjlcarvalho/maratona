#include <bits/stdc++.h>

using namespace std;

unsigned long long qtDigits(unsigned long long n){
    int result = 0;
    while(n){
        n /= 10;
        result++;
    }
    return result;
}

int main(){
    unsigned long long t, n, digits;
    cin >> t;
    for(unsigned long long i = 1; i<=t; i++){
        cin >> n;
        unsigned long long mat[n][n];
        unsigned long long colunas[n];
        for(unsigned long long j = 0; j<n; j++){
            for(unsigned long long k = 0; k<n; k++){
                cin >> mat[j][k];
                mat[j][k] *= mat[j][k];
            }
        }
        for(unsigned long long j = 0; j<n; j++){
            colunas[j] = 0;
            for(unsigned long long k = 0; k<n; k++){
                digits = qtDigits(mat[k][j]);
                if(digits > colunas[j])
                    colunas[j] = digits;
            }
        }
        cout << "Quadrado da matriz #" << i + 3 << ":" << endl;
        for(unsigned long long j = 0; j < n; j++){
            for(unsigned long long k = 0; k < n; k++){
                digits = colunas[k] - qtDigits(mat[j][k]);
                if(mat[j][k]){
                    while(digits--) cout << " ";
                    cout << mat[j][k];
                }
                else{
                    digits--;
                    while(digits--) cout << " ";
                    cout << mat[j][k];
                }
                if(k != n - 1) cout << " ";
                else cout << endl;
            }
        }
        if(i != t) cout << endl;
    }
    
    return 0;
}
