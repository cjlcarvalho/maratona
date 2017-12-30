#include <bits/stdc++.h>

using namespace std;

int primeFactor(int n){
    if(n % 2 == 0)
        return 2;
    for(int i = 3; i<=sqrt(n); i += 2)
        if(n % i == 0)
            return i;
    return n;
}

int main(){
    int n, p;
    while(cin >> n, n){
        cout << n << " = ";
        if(n < 0){
            cout << "-1 x "; 
            n *= -1;
        }
        if(n == 1)
            cout << 1;
        else {
            while(n > 1){
                p = primeFactor(n);
                cout << p;
                n /= p;
                if(n > 1) cout << " x ";
            }
        }
        cout << endl;
    }
    return 0;
}
