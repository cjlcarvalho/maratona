#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << "O JOGO DUROU ";
    if(a == b)
        cout << 24;
    else if(b > a)
        cout << b - a;
    else
        cout << (24 - a) + b;
    cout << " HORA(S)" << endl;
    return 0;
} 
