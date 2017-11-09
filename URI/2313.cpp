#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    bool valido = false;
    cin >> a >> b >> c;
    if((a >= b + c) || (b >= a + c) || (c >= a + b))
        cout << "Invalido";
    else if(a == b && b == c){
        cout << "Valido-Equilatero";
        valido = true;
    }
    else if((a == b && b != c) || (a == c && a != b) || (b == c && b != a)){
        cout << "Valido-Isoceles";
        valido = true;
    }
    else if(a != b && a != c && b != c){
        cout << "Valido-Escaleno";
        valido = true;
    }
    cout << endl;
    if(valido){
        bool retangulo = false;
        int mx = max(max(a, b), c);
        if(a == mx && (a * a == b * b + c * c)) retangulo = true;
        else if(b == mx && (b * b == a * a + c * c)) retangulo = true;
        else if(c * c == a * a + b * b) retangulo = true;
        cout << "Retangulo: " << (retangulo ? "S" : "N") << endl;
    }
        
    return 0;
}
