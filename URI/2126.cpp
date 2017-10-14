#include <bits/stdc++.h>

using namespace std;

int main(){
    string n1, n2;
    int cont = 1;
    while(cin >> n1 >> n2){
        int pos = 0, result = 0;
        for(int i = 0; i<int(n2.size()); i++){
            if(n2[i] == n1[0]){
                int j = 0, k = i;
                while(n2[k] == n1[j] && k < int(n2.size()) && j < int(n1.size())){
                    k++;
                    j++;
                }
                if(j == int(n1.size())){
                    result++;
                    pos = i + 1;
                }
            }
        }
        cout << "Caso #" << cont << ":" << endl;
        if(result){
            cout << "Qtd.Subsequencias: " << result << endl;
            cout << "Pos: " << pos << endl;
        }
        else
            cout << "Nao existe subsequencia" << endl;
        cout << endl;
        cont++;
    }
    return 0;
}
