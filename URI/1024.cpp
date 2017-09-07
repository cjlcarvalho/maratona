#include <iostream>

using namespace std;

void threeRight(string& texto){
    for(int i = 0; i<texto.size(); i++){
        if((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))
            texto[i] += 3;
    }
}

void inverse(string& texto){
    char troca;
    for(int i = 0, j = texto.size() - 1; i < j; i++, j--){
        troca = texto[i];
        texto[i] = texto[j];
        texto[j] = troca;
    } 
}

void rightOnlyFromMiddle(string& texto){
    int metade = (texto.size()) / 2;
    for(int i = metade; i<texto.size(); i++)
        texto[i] -= 1;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string texto;
        getline(cin, texto);
        threeRight(texto);
        inverse(texto);
        rightOnlyFromMiddle(texto);
        cout << texto << endl;
    }
    return 0;
}
