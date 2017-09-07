#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int cont = 1;
    while(cin >> n){
        vector<int> v;
        for(int i = 0; i<=n; i++){
            v.push_back(i);
            for(int j = 1; j<i; j++)
                v.push_back(i);
        }
        int total = v.size();
        cout << "Caso " << cont << ": " << total << ((total == 1) ? " numero" : " numeros") << endl;
        for(int i = 0; i<v.size(); i++){
            cout << v[i];
            if(i == v.size() - 1)
                cout << endl;
            else
                cout << " ";
        }
        cout << endl;
        cont++;
    }
    return 0;
}
