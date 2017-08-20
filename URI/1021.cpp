#include <iostream>

using namespace std;

int main(){
    double v;
    cin >> v;
    int cem, ciq, vin, dez, cic, doi, um, cq, vc, d, c, u;
    cem = ciq = vin = dez = cic = doi = 0;
    um = cq = vc = d = c = u = 0;
    while(v >= 100){
        v -= 100;
        cem++;
    }
    while(v >= 50){
        v -= 50;
        ciq++;
    }
    while(v >= 20){
        v -= 20;
        vin++;
    }
    while(v >= 10){
        v -= 10;
        dez++;
    }
    while(v >= 5){
        v -= 5;
        cic++;
    }
    while(v >= 2){
        v -= 2;
        doi++;
    }    
    while(v >= 1){
        v--;
        um++;
    }
    while(v >= 0.5){
        v -= 0.5;
        cq++;
    }
    while(v >= 0.25){
        v -= 0.25;
        vc++;
    }
    while(v >= 0.1){
        v -= 0.1;
        d++;
    }
    while(v >= 0.05){
        v -= 0.05;
        c++;
    }
    while(v >= 0.01F){
        v -= 0.01F;
        u++;
    }
    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << ciq << " nota(s) de R$ 50.00" << endl;
    cout << vin << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cic << " nota(s) de R$ 5.00" << endl;
    cout << doi << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << um << " moeda(s) de R$ 1.00" << endl;
    cout << cq << " moeda(s) de R$ 0.50" << endl;
    cout << vc << " moeda(s) de R$ 0.25" << endl;
    cout << d << " moeda(s) de R$ 0.10" << endl;
    cout << c << " moeda(s) de R$ 0.05" << endl;
    cout << u << " moeda(s) de R$ 0.01\n" << endl;
    return 0;   
}
