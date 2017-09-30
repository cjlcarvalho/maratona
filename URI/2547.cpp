#include <iostream>

using namespace std;

int main(){
    int n, amax, amin, a, cont;
    while(cin >> n >> amin >> amax){
        cont = 0;
        while(n--){
            cin >> a;
            if(a >= amin && a <= amax) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
