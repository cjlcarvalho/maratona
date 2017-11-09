#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    char a, b;
    string c;
    while(cin >> n >> m){
        getline(cin, c);
        map<char, char> letras;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            letras[a] = b;
            letras[b] = a;
        }
        getline(cin, c);
        for(int i = 0; i<m; i++){
            getline(cin, c);
            for(char d : c){
                if(letras.count(d)) cout << letras[d];
                else cout << d;
            }
            cout << endl;
        }
    }
    return 0;
}
