#include <bits/stdc++.h>

using namespace std;

struct Aluno {
    string nome;
    char direcao;
    double custo;
};

bool compare(Aluno a, Aluno b){
    if(a.custo < b.custo)
        return true;
    else if(a.custo == b.custo && a.direcao < b.direcao)
        return true;
    else if(a.custo == b.custo && a.direcao == b.direcao && a.nome < b.nome)
        return true;
    return false;
}

int main(){
    int n;
    while(cin >> n){
        Aluno alunos[n];
        for(int i = 0; i < n; i++){
            cin >> alunos[i].nome >> alunos[i].direcao;
            cin.ignore();
            cin >> alunos[i].custo;
        }
        sort(alunos, alunos + n, compare);
        for(int i = 0; i<n; i++) cout << alunos[i].nome << endl;
    }
    return 0;
}
