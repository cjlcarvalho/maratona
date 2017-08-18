#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, cont = 1;
    float media, menor, maior;
    vector<int> menores;
    vector<int> maiores;
    while(cin >> n >> m){
        if(n < 0 || n > 10000)
            return 0;
        if(m > n)
            return 0;
        if(n == 0 && m == 0) break;
        float vet[n - m];
        float total[n - m + 1];
        for(int i = 0; i<n; i++){ 
            cin >> vet[i];
            if(vet[i] < -200 || vet[i] > 200)
                return 0;
        }
        for(int i = 0; i<=(n - m); i++){
            media = 0;
            for(int j = i; j<(i+m); j++)
                media += vet[j];
            total[i] = media / m; 
        }
        maior = total[0];
        menor = total[0];
        for(int i = 1; i<=(n-m); i++){
            if(total[i] > maior)
                maior = total[i];
            if(total[i] < menor)
                menor = total[i];
        }
        menores.push_back(menor);
        maiores.push_back(maior);
    }
    for(auto it = menores.begin(), it2 = maiores.begin(); it != menores.end() && it2 != maiores.end(); ++it, ++it2){
        cout << "Teste " << cont << endl;
        cout << *it << " " << *it2 << endl;
        cont++;
    }
    return 0;
}