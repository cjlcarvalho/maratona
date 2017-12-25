#include <bits/stdc++.h>

using namespace std;

void print(char** mat, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++)
            cout << mat[i][j];
        cout << endl;
    }
    cout << '@' << endl;
}

int main(){
    int n, k, l;
    bool flag;
    while(cin >> n){
        if(n){
            char** mat = new char*[n];
            for(int i = 0; i<n; i++){
                mat[i] = new char[n];
                for(int j = 0; j<n; j++)
                    mat[i][j] = 'O';
            }
            mat[n/2][n/2] = 'X';
            flag = true;
            k = n / 2;
            l = n / 2;
            print(mat, n);
            mat[k][l] = 'O';
            for(int i = 0; i<n && k < n && l < n; i++){
                for(int j = 0; j<=i && k < n && l < n; j++){
                    if(flag)
                        l++;
                    else
                        l--;
                    if(k < n && l < n){
                        mat[k][l] = 'X';
                        print(mat, n);
                        mat[k][l] = 'O';
                    }
                }
                for(int j = 0; j<=i && k < n && l < n; j++){
                    if(flag)
                        k--;
                    else
                        k++;
                    if(k < n && l < n){
                        mat[k][l] = 'X';
                        print(mat, n);
                        mat[k][l] = 'O';
                    }
                }
                flag = !flag;
            }
        }
    }
    return 0;
}
