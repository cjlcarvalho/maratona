#include <iostream>

using namespace std;

int main(){
    int n, x, soma;
    cin >> n;
    while(n--){
        cin >> x;
        soma = 0;
        for(int i = 0; i<x; i++){
            if(i % 2 == 0)
                soma += 1;
            else
                soma -= 1;
        }
        cout << soma << endl;
    }
    return 0;
}
