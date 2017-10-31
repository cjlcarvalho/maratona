#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        map<string, string> alunos;
        string nome, assinatura;
        for(int i = 0; i<n; i++){
            cin >> nome >> assinatura;
            alunos[nome] = assinatura;
        }
        int x, total = 0;
        cin >> x;
        for(int i = 0; i<x; i++){
            cin >> nome >> assinatura;
            if(alunos.count(nome)){
                if(alunos[nome] != assinatura){
                    int r = 0;
                    for(int i = 0; i < int(alunos[nome].size()); i++){
                        if(alunos[nome][i] != assinatura[i])
                            r++;
                    }
                    if(r > 1)
                        total++;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
