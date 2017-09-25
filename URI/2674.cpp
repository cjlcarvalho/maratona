#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i*i<=n; i+=6)
        if(n%i == 0 || (n%(i+2)) == 0)
            return false;
    return true;
}

bool isSuper(int n){
    while(n > 0){
        if(!isPrime(n%10)) return false;
        n/=10;
    }
    return true;
}

int main(){
    int n;
    while(cin >> n){
        if(isPrime(n)){
            if(isSuper(n))
                cout << "Super" << endl;
            else
                cout << "Primo" << endl;
        }
        else
            cout << "Nada" << endl;
    }
    return 0;
}
