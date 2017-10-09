#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool check = false;
    while(cin >> n){
        if(!n) break;
        else if(check) cout << "\n";
        check = true;
        string* palavras = new string[n];
        for(int i = 0; i<n; i++)
            cin >> palavras[i];
        int maior = 0;
        for(int i = 0; i<n; i++)
            if(int(palavras[i].size()) > maior)
                maior = palavras[i].size();
                
        for(int i = 0; i<n; i++){
            int espacos = maior - palavras[i].size();
            while(espacos--) cout << " ";
            cout << palavras[i] << "\n";
        }
    }
    return 0;
}
