#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        double* notas = new double[n];
        double* cargas = new double[n];
        for(int i = 0; i<n; i++)
            cin >> notas[i] >> cargas[i];
        double sumNC = 0;
        double sumC = 0;
        for(int i = 0; i<n; i++)
            sumNC += (notas[i] * cargas[i]);
        for(int i = 0; i<n; i++)
            sumC += cargas[i];
        printf("%.4f\n", sumNC / (sumC * 100));
    }
    return 0;
}
