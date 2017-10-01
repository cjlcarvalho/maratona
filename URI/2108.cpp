#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior = -1;
    string m;
    string s;
    while(getline(cin, s)){
        if(s == "0") break;
        for(int i = 0; i<int(s.size()); i++){
            int cont = 0;
            int start = i;
            while(s[i] != ' ' && i < int(s.size())){
                cont++;
                i++;
            }
            if(maior == -1){
                maior = cont;
                m = s.substr(start, start + cont);
            }
            else if(cont >= maior){
                maior = cont;
                m = s.substr(start, start + cont);
            }
            cout << cont;
            if(s[i])
                cout << "-";
            else
                cout << endl;
        }
    }
    cout << endl << "The biggest word: " << m << endl;
    return 0;
}
