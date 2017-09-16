#include <bits/stdc++.h>

using namespace std;

int main(){
    double volume, diametro;
    while(cin >> volume >> diametro){
        double raio = diametro / 2;
        double altura = volume / (3.14 * raio * raio);
        double area = 3.14 * raio * raio;
        
        printf("ALTURA = %.2f\n", altura);
        printf("AREA = %.2f\n", area);
        
    }
    
    return 0;
}
