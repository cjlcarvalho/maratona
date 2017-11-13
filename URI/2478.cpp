#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string, vector<string> > m;
    string s, a;
    while(n--){
        cin >> s;
        if(!m.count(s)){
            vector<string> v;
            m[s] = v;
        }
        for(int i = 0; i<3; i++){
            cin >> a;
            m[s].push_back(a);
        }
    }
    while(cin >> s >> a){
        if(find(m[s].begin(), m[s].end(), a) != m[s].end())
            cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
        else
            cout << "Tente Novamente!" << endl;
    }
    return 0;
}
