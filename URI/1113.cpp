#include <iostream>

using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x == y)
            break;
        if(x > y)
            cout << "Decrescente" << endl;
        else
            cout << "Crescente" << endl;
    }
    return 0;
}
