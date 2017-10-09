#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> nomes, nao;
    string nome, escolha;
    while(cin >> nome){
        if(nome == "FIM") break;
        cin >> escolha;
        if(escolha == "YES"){
            if(find(nomes.begin(), nomes.end(), nome) == nomes.end())
                nomes.push_back(nome);
        }
        else
            nao.push_back(nome);
    }
    string amigo;
    for(int i = 0; i<int(nomes.size()); i++){
        if(!amigo.size() || nomes[i].size() > amigo.size())
            amigo = nomes[i];
    }
    sort(nomes.begin(), nomes.end());
    sort(nao.begin(), nao.end());
    for(string nome : nomes) cout << nome << endl;
    for(string nome : nao) cout << nome << endl;
    cout << endl << "Amigo do Habay:" << endl << amigo << endl;
    return 0;
}
