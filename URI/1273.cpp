#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(!n) break;
        string* palavras = new string[n];
        for(int i = 0; i<n; i++)
            cin >> palavras[i];
        int maior = 0;
        for(int i = 0; i<n; i++)
            if(palavras[i].size() > maior)
                maior = palavras[i].size();
                
        for(int i = 0; i<n; i++){
            int espacos = maior - palavras[i].size();
            while(espacos--) cout << " ";
            cout << palavras[i] << endl;
        }
        cout << endl;
    }
    return 0;
}
