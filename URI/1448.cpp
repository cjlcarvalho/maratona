#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t = 1;
    cin >> n;
    cin.ignore();
    string frase, comp[2];
    while(n--){
        getline(cin, frase);
        for(int i = 0; i<2; i++) getline(cin, comp[i]);
        bool pont[2][frase.size()];
        memset(pont, false, sizeof(pont));
        for(int i = 0; i<2; i++){
            for(int j = 0; j < int(comp[i].size()); j++)
                if(comp[i][j] == frase[j])
                    pont[i][j] = true;
        }
        int cont1 = 0, cont2 = 0;
        for(int i = 0; i<int(frase.size()); i++){
            if(pont[0][i]) cont1++;
            if(pont[1][i]) cont2++;
        }
        cout << "Instancia " << t << endl;
        if(cont1 == cont2) {
            bool equal = true;
            for(int i = 0; i<int(frase.size()) && equal; i++){
                if(pont[0][i] && !pont[1][i]){
                    cout << "time 1" << endl;
                    equal = false;
                }
                else if(pont[1][i] && !pont[0][i]){
                    cout << "time 2" << endl;
                    equal = false;
                }  
            }
            if(equal)
                cout << "empate" << endl;
        }
        else cout << "time " << (cont1 > cont2 ? 1 : 2) << endl;
        cout << endl;
        t++;
    }
    return 0;
}
