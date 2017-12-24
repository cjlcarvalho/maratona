#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, maior, temp , k, result;
    cin >> t;
    for(int i = 1; i<=t; i++){
        cin >> n;
        int mat[n];
        maior = -1;
        for(int j = 0; j<n; j++) {
            cin >> mat[j];
            if(mat[j] > maior) maior = mat[j];
        }
        result = 0;
        for(int j = 0; j<n; j++){
            if(mat[j] == maior){
                temp = 1;
                k = j + 1;
                while(k < n && mat[k] == maior){
                    temp++;
                    k++;
                }
                if(temp > result) result = temp;
                j = k - 1;
            }
        }
        cout << "Caso #" << i << ": " << result << endl;
    }
    return 0;
}
