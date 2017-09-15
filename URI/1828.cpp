#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string sheldon, raj;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> sheldon >> raj;
        cout << "Caso #" << i << ": "; 
        if(sheldon == "tesoura" && raj == "papel")
            cout << "Bazinga!";
        else if(sheldon == "papel" && raj == "pedra")
            cout << "Bazinga!";
        else if(sheldon == "pedra" && raj == "lagarto")
            cout << "Bazinga!";
        else if(sheldon == "lagarto" && raj == "Spock")
            cout << "Bazinga!";
        else if(sheldon == "Spock" && raj == "tesoura")
            cout << "Bazinga!";
        else if(sheldon == "tesoura" && raj == "lagarto")
            cout << "Bazinga!";
        else if(sheldon == "lagarto" && raj == "papel")
            cout << "Bazinga!";
        else if(sheldon == "papel" && raj == "Spock")
            cout << "Bazinga!";
        else if(sheldon == "Spock" && raj == "pedra")
            cout << "Bazinga!";
        else if(sheldon == "pedra" && raj == "tesoura")
            cout << "Bazinga!";
        else if(raj == "tesoura" && sheldon == "papel")
            cout << "Raj trapaceou!";
        else if(raj == "papel" && sheldon == "pedra")
            cout << "Raj trapaceou!";
        else if(raj == "pedra" && sheldon == "lagarto")
            cout << "Raj trapaceou!";
        else if(raj == "lagarto" && sheldon == "Spock")
            cout << "Raj trapaceou!";
        else if(raj == "Spock" && sheldon == "tesoura")
            cout << "Raj trapaceou!";
        else if(raj == "tesoura" && sheldon == "lagarto")
            cout << "Raj trapaceou!";
        else if(raj == "lagarto" && sheldon == "papel")
            cout << "Raj trapaceou!";
        else if(raj == "papel" && sheldon == "Spock")
            cout << "Raj trapaceou!";
        else if(raj == "Spock" && sheldon == "pedra")
            cout << "Raj trapaceou!";
        else if(raj == "pedra" && sheldon == "tesoura")
            cout << "Raj trapaceou!";
        else
            cout << "De novo!";
        
        cout << endl;
    }
    return 0;
}
