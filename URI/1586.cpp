#include <bits/stdc++.h>

using namespace std;

void exists(string* nome, int n){
    for(int i = 0; i<n; i++){
        int sum, A = 0, B = 0;
        for(int j = 0, l = i + 1; j <= i; j++, l--){
            sum = 0;
            for(char letra : nome[j])
                sum += letra;
            A += (sum * l);
        }
        for(int k = i + 1, l = 1; k < n; k++, l++){
            sum = 0;
            for(char letra : nome[k])
                sum += letra;
            B += (sum * l);
        }
        if(A == B){
            cout << nome[i] << endl;
            return;
        }
    }
    cout << "Impossibilidade de empate." << endl;
}

int main(){
    int n;
    while(cin >> n, n){
        cin.ignore();
        string nome[n];
        for(int i = 0; i<n; i++) getline(cin, nome[i]);
        exists(nome, n);
    }
    return 0;
}
