#include <iostream>

using namespace std;

int main(){
    int n;
    int vet[1000];
    cin >> n;
    int cont = 0;
    for(int i = 0; i<1000; i++){
        if(cont == n)
            cont = 0;
        vet[i] = cont;
        cont++;
    }
    for(int i = 0; i<1000; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
    return 0;
}
