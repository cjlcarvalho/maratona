#include <iostream>

using namespace std;

int main(){
    int x, z;
    cin >> x;
    do{
        cin >> z;
    } while(z <= x);
    int soma = x;
    int cont = 1;
    while(soma <= z){
        x++;
        soma += x;
        cont++;
    }
    cout << cont << endl;
    return 0;
}
