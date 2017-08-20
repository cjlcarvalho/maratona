#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "O JOGO DUROU ";
    if(a == c && b == d)
        cout << "24 HORA(S) E 0 MINUTO(S)" << endl;
    else if(c > a){
        if(d >= b){
            cout << c - a << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
        }
        else{
            int h = c - a - 1;
            cout << h << " HORA(S) E " << (d + 60) - b << " MINUTO(S)" << endl;
        }
    }
    else{
        int h = (c + 24) - a;
        if(d >= b){
            cout << h << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
        }
        else{
            h -= 1;
            cout << h << " HORA(S) E " << (d + 60) - b << " MINUTO(S)" << endl;
        }
    }
    return 0; 
}
