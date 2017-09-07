#include <iostream>

using namespace std;

int main(){
    int64_t x, y;
    while(cin >> x >> y){
        if(x == 0 && y == 0) break;
        cout << x * y << endl;
    }
    return 0;
}
