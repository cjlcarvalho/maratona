#include <iostream>

using namespace std;

int main(){
    int pontas[4];
    for(int i = 0; i<4; i++)
        cin >> pontas[i];
    
    bool achou = false;
    for(int i = 0; i<4; i++){
        for(int j = i + 1; j<4; j++){
            for(int k = j + 1; k<4; k++){
                if(!(pontas[i] > (pontas[j] + pontas[k]) || pontas[j] > (pontas[i] + pontas[k]) || pontas[k] > (pontas[i] + pontas[j])))
                    achou = true;
            }
        }
    }
    if(achou)
        cout << "S";
    else
        cout << "N";
    cout << endl;
    return 0;
}
