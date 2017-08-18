#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<vector<string> > v; 
    while(cin >> n){
        if(n == 0)
            break;
        string a, b;
        vector<string> c;
        int va, vb;
        cin.ignore();
        getline(cin, a);
        getline(cin, b);
        while(n){
            cin >> va >> vb;
            if((va + vb) % 2)
                c.push_back(b);
            else
                c.push_back(a);
            n--;
        }
        v.push_back(c);
    }
    int cont = 1;
    for(vector<vector<string> >::iterator i = v.begin(); i != v.end(); ++i){
        cout << "Teste " << cont << endl;
        for(vector<string>::iterator j = (*i).begin(); j != (*i).end(); ++j){
            cout << *j << endl;
        }
        cout << "\n";
        cont++;
    }
    return 0;
}
