#include <iostream>

using namespace std;

int main(){
    int x, y, max, min;
    while(cin >> x >> y){
        if(x <= 0 || y <= 0)
            break;
        if(x > y){
            min = y;
            max = x;
        }
        else{
            min = x;
            max = y;
        }
        int soma = 0;
        for(int i = min; i<=max; i++){
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << endl;
    }
    return 0;
}
