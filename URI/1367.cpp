#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, soma, cont, temp;
    while(cin >> n, n){
        soma = cont = 0;
        char p[n];
        int q[n];
        string k[n];
        for(int i = 0; i<n; i++){
            cin >> p[i] >> q[i];
            cin.ignore();
            cin >> k[i];
        }
        for(int i = 0; i<n; i++){
            if(k[i] == "correct"){
                temp = q[i];
                for(int j = i - 1; j >= 0; j--)
                    if(p[j] == p[i] && k[j] == "incorrect") temp += 20;
                soma += temp;
                cont++;
            }
        }
        cout << cont << " " << soma << endl;
    }
    return 0;
}
