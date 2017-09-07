#include <iostream>

using namespace std;

int main(){
    int n, total, j;
    string nome1, nome2, j1, j2;
    
    cin >> n;
    
    while(n--){
        cin >> nome1 >> j1 >> nome2 >> j2;
        total = 0;
        for(int i = 0; i<2; i++){
            cin >> j;
            total += j;
        }
        if(total % 2 == 0){
            if(j1 == "PAR")
                cout << nome1;
            else
                cout << nome2;
        }
        else{
            if(j1 == "IMPAR")
                cout << nome1;
            else
                cout << nome2;
        }
        cout << endl;
    }
    return 0;
}
