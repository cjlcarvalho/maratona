#include <bits/stdc++.h>

using namespace std;

int main(){
    int b, e;
    bool letras[26];
    string s;
    while(getline(cin, s)){
        vector<string> v;
        memset(letras, false, sizeof(letras));
        for(int i = 0; i<int(s.size()); i++){
            if(isalpha(s[i]))
                letras[s[i] - 97] = true;
        }
        for(int i = 0; i<26; i++){
            if(letras[i]){
                string t;
                b = i;
                e = i + 1;
                while(letras[e] && e < 26)
                    e++;
                e--;
                t.push_back(char(b + 97));
                t.push_back(':');
                t.push_back(char(e + 97));
                v.push_back(t);
                i = e;
            }
        }
        for(int i = 0; i<int(v.size()); i++){
            cout << v[i];
            if(i != int(v.size()) - 1) cout << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
