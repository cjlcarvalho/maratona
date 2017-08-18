#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    vector<bool> v;
    while(cin >> r){
        if(r == 0)
            break;
        int a, b, ra = 0, rb = 0;
        for(int i = 0; i<r; i++){
            cin >> a >> b;
            ra += a;
            rb += b;
        }
        if(ra > rb)
            v.push_back(true);
        else
            v.push_back(false);
    }
    int cont = 1;
    for(vector<bool>::iterator it = v.begin(); it != v.end(); ++it){
        cout << "Teste " << cont << endl;
        if(*it)
            cout << "Aldo" << endl;
        else
            cout << "Beto" << endl;
        cout << "\n";
        cont++;
    }
    return 0;
}
