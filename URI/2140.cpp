#include <iostream>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        if(n == 0 && n == m)
            break;
        int troco = m - n;
        int notas = 0;
        if(troco >= 100){
            troco -= 100;
            notas++;
        }
        if(troco >= 50){
            troco -= 50;
            notas++;
        }
        if(troco >= 20){
            troco -= 20;
            notas++;
        }
        if(troco >= 10){
            troco -= 10;
            notas++;
        }
        if(troco >= 5){
            troco -= 5;
            notas++;
        }
        if(troco >= 2){
            troco -= 2;
            notas++;
        }
        
        if(notas == 2)
            cout << "possible" << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}
