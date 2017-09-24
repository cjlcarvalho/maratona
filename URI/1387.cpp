#include <iostream>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(!a && !b) break;
        cout << a + b << endl;
    }
    return 0;
}
