#include <bits/stdc++.h>

using namespace std;

void erase(string& a){
    for(int i = 0; i<int(a.size()); i++){
        if(!isdigit(a[i]) && a[i] != '.'){
            a.erase(a.begin() + i);
            i--;
        }
    }
}

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    erase(a);
    erase(b);
    double c = stod(a.substr(11, a.size() - 11));
    double d = stod(b);
    c = floor(c * 100)/100;
    d = floor(d * 100)/100;
    cout << "cpf " << a.substr(0, 11) << endl;
    cout << fixed << setprecision(2) << c + d << endl;
    return 0;    
}
