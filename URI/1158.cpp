#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int soma = 0;
        int x, y;
        cin >> x >> y;
        for(int i = x; y; x++){
            if(x % 2){
                soma += x;
                y--;
            }
        }
        cout << soma << endl;
    }
    return 0;
}
