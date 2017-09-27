#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string x;
        getline(cin, x);
        bool letras[26];
        memset(letras, false, sizeof(letras));
        for(char c : x)
            letras[c - 97] = true;
        int total = 0;
        for(bool b : letras)
            if(b) total++;
        if(total == 26)
            cout << "frase completa" << endl;
        else if(total >= 13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;        
    }
    return 0;
}
