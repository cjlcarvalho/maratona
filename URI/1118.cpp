#include <iostream>

using namespace std;

int main(){
    double nota, total;
    int escolha, cont;
    
    while(true){
        total = 0;
        cont = 0;
        while(cont < 2){
            cin >> nota;
            if(nota < 0 || nota > 10)
                cout << "nota invalida" << endl;
            else{
                total += nota;
                cont++;
            }
        }
        printf("media = %.2f\n", total / cont);
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> escolha;
        } while(escolha != 1 && escolha != 2);
        if(escolha == 2)
            break;
    }
    return 0;
}
