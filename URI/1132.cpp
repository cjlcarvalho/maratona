#include <iostream>

using namespace std;

int main(){
    int x, y, min, max;
    int soma = 0;
    cin >> x >> y;
    min = x;
    max = y;
    if(x > y){
        min = y;
        max = x;
    }
    for(int i = min; i<=max; i++){
        if(i % 13 != 0)
            soma += i;
    }
    cout << soma << endl;
    return 0;
}
