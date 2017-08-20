#include <iostream>

using namespace std;

int main(){
    int n;
    do{
        cin >> n;
        if(n != 2002)
            cout << "Senha Invalida" << endl;
        else
            cout << "Acesso Permitido" << endl;
    }while(n != 2002);
    return 0;
}
