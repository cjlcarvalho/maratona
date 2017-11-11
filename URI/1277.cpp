#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        cin.ignore();
        string alunos[m];
        string presenca[m];
        for(int i = 0; i<m; i++) cin >> alunos[i];
        for(int i = 0; i<m; i++) cin >> presenca[i];
        vector<string> ausentes;
        for(int i = 0; i<m; i++){
            double cont = 0, total = 0;
            for(int j = 0; j<int(presenca[i].size()); j++){
                if(presenca[i][j] == 'P'){
                    cont++;
                    total++;
                }
                else if(presenca[i][j] == 'A')
                    total++;
            }
            if(cont / total < 0.75)
                ausentes.push_back(alunos[i]);
        }
        for(int i = 0; i<int(ausentes.size()); i++){
            cout << ausentes[i];
            if(i < int(ausentes.size()) - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
