#include <bits/stdc++.h>

using namespace std;

bool prime(int n){
    if(n < 2) return false;
    else if(n <= 3) return true;
    else if(!(n % 2) || !(n % 3))
        return false;
    for(int i = 5; i*i <= n; i+=6)
        if(!(n%i) || !(n%(i+2))) return false;
    return true;
}

bool superprime(int n){
    while(n){
        if(!prime(n%10))
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    while(cin >> n){
        if(prime(n)){
            if(superprime(n))
                cout << "Super" << endl;
            else
                cout << "Primo" << endl;
        }
        else
            cout << "Nada" << endl;
    }
    return 0;
}
