#include <iostream>

using namespace std;

int main(){
    int n, x, y, soma, min, max;
    cin >> n;
    while(n--){
        cin >> x >> y;
        soma = 0;
        if(x > y){
            min = y;
            max = x;
        }
        else{
            min = x;
            max = y;
        }
        for(int i = min + 1; i<max; i++)
            if(i % 2)
                soma += i;
        cout << soma << endl;
    }
    return 0;
}
