#include <iostream>

using namespace std;

int qtDigits(int n){
    int total = 0;
    while(n > 0){
        total++;
        n /= 10; 
    }
    return total;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        int mat[n][n];
        int digits = 1, x;
        mat[0][0] = 1;
        for(int i = 1; i<n; i++){
            mat[i][0] = mat[i - 1][0] * 2;
            x = qtDigits(mat[i][0]);
            if(x > digits)
                digits = x;
        }
        for(int i = 0; i<n; i++){
            for(int j = 1; j<n; j++){
                mat[i][j] = mat[i][j-1] * 2;
                x = qtDigits(mat[i][j]);
                if(x > digits)
                    digits = x;
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                x = qtDigits(mat[i][j]);
                if(x < digits){
                    for(int i = 0; i < (digits - x); i++)
                        cout << " ";
                }
                cout << mat[i][j];
                if(j != n-1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
