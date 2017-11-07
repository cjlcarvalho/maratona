#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string nomes[n];
    double notas[n], grau;
    for(int i = 0; i<n; i++){
        cin >> nomes[i] >> grau;
        double v[7];
        for(int j = 0; j<7; j++) cin >> v[j];
        int maior = -1, menor = -1;
        for(int j = 0; j<7; j++){
            if(maior == -1)
                maior = j;
            else if(v[maior] < v[j])
                maior = j;
            if(menor == -1)
                menor = j;
            else if(v[menor] > v[j])
                menor = j;
        }
        double soma = 0;
        for(int j = 0; j<7; j++)
            if(j != maior && j != menor)
                soma += v[j];
        notas[i] = soma * grau;
    }
    cout << fixed << setprecision(2);
    for(int i = 0; i<n; i++) cout << nomes[i] << " " << notas[i] << endl;
    return 0;
}
