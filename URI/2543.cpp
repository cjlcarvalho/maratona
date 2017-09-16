#include <iostream>

using namespace std;

int main(){
    int n, id;
    while(cin >> n >> id){
        int gp, tipo, cont = 0;
        while(n--){
            cin >> gp >> tipo;
            if(gp == id && !tipo) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
