#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string sheldon, raj;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> raj >> sheldon;
        if(sheldon == "tesoura" && raj == "papel")
            cout << "sheldon";
        else if(sheldon == "papel" && raj == "pedra")
            cout << "sheldon";
        else if(sheldon == "pedra" && raj == "lagarto")
            cout << "sheldon";
        else if(sheldon == "lagarto" && raj == "spock")
            cout << "sheldon";
        else if(sheldon == "spock" && raj == "tesoura")
            cout << "sheldon";
        else if(sheldon == "tesoura" && raj == "lagarto")
            cout << "sheldon";
        else if(sheldon == "lagarto" && raj == "papel")
            cout << "sheldon";
        else if(sheldon == "papel" && raj == "spock")
            cout << "sheldon";
        else if(sheldon == "spock" && raj == "pedra")
            cout << "sheldon";
        else if(sheldon == "pedra" && raj == "tesoura")
            cout << "sheldon";
        else if(raj == "tesoura" && sheldon == "papel")
            cout << "rajesh";
        else if(raj == "papel" && sheldon == "pedra")
            cout << "rajesh";
        else if(raj == "pedra" && sheldon == "lagarto")
            cout << "rajesh";
        else if(raj == "lagarto" && sheldon == "spock")
            cout << "rajesh";
        else if(raj == "spock" && sheldon == "tesoura")
            cout << "rajesh";
        else if(raj == "tesoura" && sheldon == "lagarto")
            cout << "rajesh";
        else if(raj == "lagarto" && sheldon == "papel")
            cout << "rajesh";
        else if(raj == "papel" && sheldon == "spock")
            cout << "rajesh";
        else if(raj == "spock" && sheldon == "pedra")
            cout << "rajesh";
        else if(raj == "pedra" && sheldon == "tesoura")
            cout << "rajesh";
        else
            cout << "empate";
        
        cout << endl;
    }
    return 0;
}
