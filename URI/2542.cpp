#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l;
    while(cin >> n){
        cin >> m >> l;
        int marcos[m][n];
        int leo[m][n];
        for(int i = 0; i<m; i++)
            for(int j = 0; j<n; j++)
                cin >> marcos[i][j];
        for(int i = 0; i<m; i++)
            for(int j = 0; j<n; j++)
                cin >> leo[i][j];
        int escolham, escolhal, escolha;
        cin >> escolham >> escolhal >> escolha;
        if(marcos[escolham - 1][escolha - 1] > leo[escolhal - 1][escolha - 1])
            cout << "Marcos" << endl;
        else if(leo[escolhal - 1][escolha - 1] > marcos[escolham - 1][escolha - 1])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;
    }
    return 0;
}
