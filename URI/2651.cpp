#include <bits/stdc++.h>

using namespace std;

void minimize(string& s){
    for(int i = 0; i < int(s.size()); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}

int main(){
    string s;
    getline(cin, s);
    minimize(s);
    bool c = false;
    for(int i = 0; i + 4 <int(s.size()); i++){
        if(s.substr(i, 5) == "zelda")
            c = true;
    }
    if(c) cout << "Link Bolado" << endl;
    else cout << "Link Tranquilo" << endl;
    return 0;
}
