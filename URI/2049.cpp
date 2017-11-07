#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    int i = 1;
    bool check = false;
    while(getline(cin, a)){
        if(a == "0") break;
        if(!check) check = true;
        else cout << endl;
        getline(cin, b);
        bool exist = false;
        for(int j = 0; j<int(b.size()); j++){
            if(b[j] == a[0]){
                int k = 0, t = j;
                while(k < int(a.size()) && b[t] == a[k]){
                    k++;
                    t++;
                }
                if(k == int(a.size())){
                    exist = true;
                    j = t-1;
                }
            }
        }
        cout << "Instancia " << i << endl;
        cout << (exist ? "verdadeira" : "falsa") << endl;
        i++;
    }
    return 0;
}
