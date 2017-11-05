#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);
        bool check = false;
        for(int i = 0; i < int(a.size()); i++){
            if(a[i] == b[0]){
                int j = i, l = 0;
                while(a[j] == b[l] && j < int(a.size())){
                    j++;
                    l++;
                }
                if(l == int(b.size())) {
                    check = true;
                    break;
                }
            }
        }
        if(check) cout << "Resistente" << endl;
        else cout << "Nao resistente" << endl;
    }
    return 0;
}
