#include <bits/stdc++.h>

using namespace std;

const int MAX = 26;

void zerar(int letras[][2]){
    for(int i = 0; i < MAX; i++)
        letras[i][1] = 0;
}

void incrementar(int letras[][2], char letra){
    for(int i = 0; i<MAX; i++)
        if(letras[i][0] == letra)
            letras[i][1]++;
}

void imprimirMaior(int letras[][2]){
    int maior = letras[0][1];
    for(int i = 1; i<MAX; i++)
        if(letras[i][1] > maior)
            maior = letras[i][1];
    for(int i = 0; i<MAX; i++)
        if(maior == letras[i][1])
            printf("%c", letras[i][0]);
    cout << endl;
}

int main(){
    int n;
    string frase;
    cin >> n;
    cin.ignore();
    int letras[MAX][2];
    for(int i = 'a', j = 0; i <= 'z'; i++, j++)
        letras[j][0] = i;
    while(n--){
        zerar(letras);
        getline(cin, frase);
        for(unsigned int i = 0; i<frase.size(); i++)
            incrementar(letras, (frase[i] >= 'A' && frase[i] <= 'Z' ? frase[i] + 32 : frase[i]));
        imprimirMaior(letras);
    }
    return 0;
}
