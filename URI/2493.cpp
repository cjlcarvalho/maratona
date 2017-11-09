#include <bits/stdc++.h>

using namespace std;

struct Jogador {
    string nome;
    int index;
    char op;
};

int main(){
    int n;
    while(cin >> n){
        int a[n], b[n], c[n];
        Jogador jogador[n];
        for(int i = 0; i<n; i++)
            scanf("%d %d=%d", &a[i], &b[i], &c[i]);
        for(int i = 0; i<n; i++)
            cin >> jogador[i].nome >> jogador[i].index >> jogador[i].op;
        vector<string> lose;
        for(int i = 0; i<n; i++){
            int j = jogador[i].index - 1;
            if(jogador[i].op == '+'){
                if(a[j] + b[j] != c[j])
                    lose.push_back(jogador[i].nome);
            }
            else if(jogador[i].op == '-'){
                if(a[j] - b[j] != c[j])
                    lose.push_back(jogador[i].nome);
            }
            else if(jogador[i].op == '*'){
                if(a[j] * b[j] != c[j])
                    lose.push_back(jogador[i].nome);
            }
            else if(jogador[i].op == 'I'){
                if(a[j] + b[j] == c[j] || a[j] - b[j] == c[j] || a[j] * b[j] == c[j])
                    lose.push_back(jogador[i].nome);
            }
        }
        if(!lose.size())
            cout << "You Shall All Pass!" << endl;
        else if(int(lose.size()) == n)
            cout << "None Shall Pass!" << endl;
        else{
            sort(lose.begin(), lose.end());
            for(int i = 0; i < int(lose.size()); i++){
                cout << lose[i];
                if(i == int(lose.size()) - 1)
                    cout << endl;
                else
                    cout << " ";
            }
        }
    }
    return 0;
}
