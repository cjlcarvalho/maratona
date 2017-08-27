#include <iostream>

using namespace std;

int main(){
    int a, b, q, r;
    cin >> a >> b;
    int abs = b < 0 ? -b : b;
    r = abs - 1;
    if(a < 0){
        while(r >= 0){
            q = (r - a) / b;
            if(a == (((-q)*b) + r)){
                cout << (-q) << " " << r << endl;
                break;
            }
            else
                r--;
        }
    }
    else
        cout << a / b << " " << a % b << endl;
    return 0;
}
