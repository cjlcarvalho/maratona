#include <bits/stdc++.h>

using namespace std;

void convert(int* n){
    int temp = *n;
    if(*n == 0){
        cout << "zero";
        return;
    }
    if(*n >= 1000){
        cout << "mil";
        *n -= 1000;
    }
    if(*n >= 900){
        cout << "novecentos";
        *n -= 900;
    }
    else if(*n >= 800){
        cout << "oitocentos";
        *n -= 800;
    }
    else if(*n >= 700){
        cout << "setecentos";
        *n -= 700;
    }
    else if(*n >= 600){
        cout << "seiscentos";
        *n -= 600;
    }
    else if(*n >= 500){
        cout << "quinhentos";
        *n -= 500;
    }
    else if(*n >= 400){
        cout << "quatrocentos";
        *n -= 400;
    }
    else if(*n >= 300){
        cout << "trezentos";
        *n -= 300;
    }
    else if(*n >= 200){
        cout << "duzentos";
        *n -= 200;
    }
    else if(*n >= 100){
        if(*n % 100 == 0) cout << "cem";
        else cout << "cento";
        *n -= 100;
    }
    if(*n && *n >= 10 && temp >= 100)
        cout << " e ";
    if(*n >= 90){
        cout << "noventa";
        *n -= 90;
    }
    else if(*n >= 80){
        cout << "oitenta";
        *n -= 80;
    }
    else if(*n >= 70){
        cout << "setenta";
        *n -= 70;
    }
    else if(*n >= 60){
        cout << "sessenta";
        *n -= 60;
    }
    else if(*n >= 50){
        cout << "cinquenta";
        *n -= 50;
    }
    else if(*n >= 40){
        cout << "quarenta";
        *n -= 40;
    }
    else if(*n >= 30){
        cout << "trinta";
        *n -= 30;
    }
    else if(*n >= 20){
        cout << "vinte";
        *n -= 20;
    }
    if(*n && *n < 10 && temp > 10) cout << " e ";
    if(*n == 19) {
        cout << "dezenove";
        *n -= 19;
    }
    else if(*n == 18){
        cout << "dezoito";
        *n -= 18;
    }
    else if(*n == 17){
        cout << "dezessete";
        *n -= 17;
    }
    else if(*n == 16){
        cout << "dezesseis";
        *n -= 16;
    }
    else if(*n == 15){
        cout << "quinze";
        *n -= 15;
    }
    else if(*n == 14){
        cout << "quatorze";
        *n -= 14;
    }
    else if(*n == 13){
        cout << "treze";
        *n -= 13;
    }
    else if(*n == 12){
        cout << "doze";
        *n -= 12;
    }
    else if(*n == 11){
        cout << "onze";
        *n -= 11;
    }
    else if(*n == 10){
        cout << "dez";
        *n -= 10;
    }
    if(*n == 9){
        cout << "nove";
        *n -= 9;
    }
    else if(*n == 8){
        cout << "oito";
        *n -= 8;
    }
    else if(*n == 7){
        cout << "sete";
        *n -= 7;
    }
    else if(*n == 6){
        cout << "seis";
        *n -= 6;
    }
    else if(*n == 5){
        cout << "cinco";
        *n -= 5;
    }
    else if(*n == 4){
        cout << "quatro";
        *n -= 4;
    }
    else if(*n == 3){
        cout << "tres";
        *n -= 3;
    }
    else if(*n == 2){
        cout << "dois";
        *n -= 2;
    }
    else if(*n == 1){
        cout << "um";
        *n -= 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp;
    while(cin >> n){
        if(!n)
            convert(&n);
        else if(n > 1000){
            temp = n / 1000;
            if(temp == 1)
                cout << "mil";
            else {
                convert(&temp);
                cout << " mil";
            }
            n %= 1000;
            if(n){
                if(n % 100 != 0 && n >= 100) cout << " ";
                else cout << " e ";
            }
        }
        if(n)
            convert(&n);
        cout << endl;
    }
    return 0;
}
