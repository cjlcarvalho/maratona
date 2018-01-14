#include <bits/stdc++.h>

using namespace std;

struct Child {
    string nome;
    int val;
};

int main(){
    int n, v, temp;
    string s;
    while(cin >> n){
        vector<Child> c;
        for(int i = 0; i<n; i++){
            cin.ignore();
            cin >> s >> v;
            c.push_back({s, v});
        }
        int cont = c[0].val;
        int i = 1;
        while(c.size() > 1){
            if(cont % 2 == 0){
                cont--;
                while(cont){
                    i++;
                    i %= c.size();
                    cont--;
                }
            }
            else {
                cont--;
                while(cont){
                    i--;
                    if(i < 0) i = int(c.size()) - 1;
                    cont--;
                }
            }
            cont = c[i].val;
            temp = i;
            if(temp == int(c.size()) - 1) i = 0;
            c.erase(c.begin() + temp);
        }
        cout << "Vencedor(a): " << c[0].nome << endl;
    }
    return 0;
}
