#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 1;
    int maior = 1;
    int valor;
    int v = 0;
    while(i <= 100){
        cin >> valor;
        if(valor > v){
            v = valor;
            maior = i;
        }
        i++;
    }
    cout << v << endl;
    cout << maior << endl;
    return 0;
}
