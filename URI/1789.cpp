#include <iostream>

using namespace std;

int main(){
    int n, l;
    while(cin >> n){
        int maior = 0;
        for(int i = 0; i < n; i++){
            cin >> l;
            if(l > maior)
                maior = l;
        }
        if(maior >= 20)
            cout << 3 << endl;
        else if(maior >= 10)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
