#include <bits/stdc++.h>

using namespace std;

int main(){
    string dodo, leo, pepper;
    while(cin >> dodo >> leo >> pepper){
        if((dodo == "pedra" && leo == "tesoura" && pepper == "tesoura") || (dodo == "papel" && leo == "pedra" && pepper == "pedra") || (dodo == "tesoura" && leo == "papel" && pepper == "papel"))
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...";
        else if((leo == "pedra" && dodo == "tesoura" && pepper == "tesoura") || (leo == "papel" && dodo == "pedra" && pepper == "pedra") || (leo == "tesoura" && dodo == "papel" && pepper == "papel"))
            cout << "Iron Maiden's gonna get you, no matter how far!";
        else if((pepper == "pedra" && leo == "tesoura" && dodo == "tesoura") || (pepper == "papel" && leo == "pedra" && dodo == "pedra") || (pepper == "tesoura" && leo == "papel" && dodo == "papel"))
            cout << "Urano perdeu algo muito precioso...";
        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar...";
        cout << endl;
    }
    return 0;
}
