#include <iostream>

using namespace std;

int main(){
    uint64_t n;
    while(cin >> n){
        if(n == -1) break;
        if(n > 0) n -= 1;
        cout << n << endl; 
    }
    return 0;
}
