#include <iostream>

using namespace std;

int totalDias(int i){
    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
        return 31;
    else if(i != 2)
        return 30;
    else
        return 29;
    return 31;
}

int main(){
    int x, y;
    while(cin >> x >> y){
        int total = 0;
        bool checked = false;
        if(x < 12){
            for(int i = x; i < 12; i++)
                total += totalDias(i);
        }
        else if(x == 12){
            if(y > 25){
                cout << "Ja passou!" << endl;
                checked = true;
            }
            else if(y == 25){
                cout << "E natal!" << endl;
                checked = true;
            }
            else if(y == 24){
                cout << "E vespera de natal!" << endl;
                checked = true;
            }
        }
        if(y < 25)
            total += (25 - y);
        else if(y > 25)
            total -= (y - 25);
        if(!checked)
            cout << "Faltam " << total << " dias para o natal!" << endl;     
    }
    return 0;
}
