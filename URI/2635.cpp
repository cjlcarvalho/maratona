#include <bits/stdc++.h>

using namespace std;

void contains(string busca, string* palavra, int n){
    int result = 0, maior = -1;
    for(int i = 0; i<n; i++){
        if(palavra[i].size() < busca.size()) continue;
        if(palavra[i].substr(0, busca.size()) == busca){
            result++;
            maior = max(maior, int(palavra[i].size()));
        }
    }
    if(result)
        cout << result << " " << maior << endl;
    else cout << -1 << endl;
}

int main(){
    int n, m;
    cin >> n;
    cin.ignore();
    string palavra[n], busca; 
    for(int i = 0; i<n; i++) cin >> palavra[i];
    cin >> m;
    cin.ignore();
    for(int i = 0; i<m; i++){
        cin >> busca;
        contains(busca, palavra, n);
    }
    return 0;
}
