#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int day;
        cin >> day;
        int d[n];
        for(int i = 0; i<n; i++)
            cin >> d[i];
        int maior = -1;
        bool checked = false;
        for(int i = 0; i<n; i++){
            int cont, soma, result;
            cont = soma = result = 0;
            for(int j = i; j<n; j++){
                soma += d[j];
                cont++;
                result = soma - (cont * day);
                if(!checked){
                    maior = result;
                    checked = true;
                }
                else if(result > maior)
                    maior = result; 
            }
        }
        if(maior <= 0)
            cout << 0 << endl;
        else
            cout << maior << endl;
    }
    return 0;
}
