#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l;
    while(cin >> n){
        cin >> m >> l;
        int marcos[m][n];
        int leo[l][n];
        for(int i = 0; i<m; i++)
            for(int j = 0; j<n; j++)
                cin >> marcos[i][j];
        for(int i = 0; i<l; i++)
            for(int j = 0; j<n; j++)
                cin >> leo[i][j];
        int escolham, escolhal, escolha;
        cin >> escolham >> escolhal >> escolha;
        int emarcos = 0;
        if(escolham - 1 >= 0 && escolha - 1 >= 0)
            emarcos = marcos[escolham-1][escolha-1];
        int eleo = 0;
        if(escolhal - 1 >= 0 && escolha - 1 >= 0)
            eleo = leo[escolhal-1][escolha-1];
        if(emarcos > eleo)
            cout << "Marcos\n";
        else if(eleo > emarcos)
            cout << "Leonardo\n";
        else
            cout << "Empate\n";
    }
    return 0;
}
