#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        int soma = 0;
        int c = 1;
        for(int i = n; c <= 5; i++){
            if(i % 2 == 0){
                soma += i;
                c++;
            }
        }
        cout << soma << endl;
    }
    return 0;
}
