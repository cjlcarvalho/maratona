#include <bits/stdc++.h>

using namespace std;

void printFormatted(int n){
    int cont = 0, t = n;
    while(t){
        cont++;
        t /= 10;
    }
    cont = 3 - cont;
    while(cont--) cout << " ";
    cout << n;
}

void imprimir(int n){
    int t = (n+1)/2;
    int matriz[t][t];
    for(int i = 0; i<t; i++){
        for(int j = 0, l = 1; j<t; j++){
            matriz[i][j] = l;
            if(j < i) l++;
        }
    }
    for(int i = 0; i<t; i++){
        for(int j = 0; j<t; j++){
            printFormatted(matriz[i][j]);
            cout << " ";
        }
        for(int j = t - ((n % 2) ? 2 : 1); j >= 0; j--){
            printFormatted(matriz[i][j]);
            if(j) cout << " ";
        }
        cout << endl;
    }
    for(int i = t - ((n % 2) ? 2 : 1); i >= 0; i--){
        for(int j = 0; j<t; j++){
            printFormatted(matriz[i][j]);
            cout << " ";
        }
        for(int j = t - ((n % 2) ? 2 : 1); j >= 0; j--){
            printFormatted(matriz[i][j]);
            if(j) cout << " ";
        }
        cout << endl; 
    }
    cout << endl;
}

int main(){
    int n;
    while(cin >> n){
        if(!n) break;
        imprimir(n);
    }
    return 0;
}
