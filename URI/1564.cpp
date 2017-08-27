#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << "vai ter ";
        if(n == 0)
            cout << "copa!";
        else
            cout << "duas!";
        cout << endl;
    }
    return 0;
}
