#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int soma = 0;
        for(int i = 1; i<x; i++){
            if(x % i == 0)
                soma += i;
        }
        if(soma == x)
            cout << x << " eh perfeito" << endl;
        else
            cout << x << " nao eh perfeito" << endl;
    }
    return 0;
}
