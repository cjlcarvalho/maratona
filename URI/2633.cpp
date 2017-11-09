#include <bits/stdc++.h>

using namespace std;

struct Carne {
    string nome;
    int valor;
};

bool compare(Carne a, Carne b){
    return a.valor < b.valor;
}

int main(){
    int n;
    while(cin >> n){
        Carne carnes[n];
        for(int i = 0; i<n; i++) cin >> carnes[i].nome >> carnes[i].valor;
        sort(carnes, carnes + n, compare);
        for(int i = 0; i<n; i++){
            cout << carnes[i].nome;
            if(i == n - 1) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
