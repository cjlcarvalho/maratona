#include <iostream>

using namespace std;

int main(){
    unsigned int v, value;
    cin >> v;
    value = v;
    int cem, ciq, vin, dez, cic, doi, um;
    cem = value / 100;
    value %= 100;
    ciq = value / 50;
    value %= 50;
    vin = value / 20;
    value %= 20;
    dez = value / 10;
    value %= 10;
    cic = value / 5;
    value %= 5;
    doi = value / 2;
    value %= 2;
    um = value;
    cout << v << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << ciq << " nota(s) de R$ 50,00" << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cic << " nota(s) de R$ 5,00" << endl;
    cout << doi << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;
    return 0;
} 
