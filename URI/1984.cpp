#include <iostream>

using namespace std;

int main(){
    int64_t a;
    cin >> a;
    while(a > 0){
        cout << a % 10;
        a /= 10;
    }
    cout << endl;
    return 0;
}
