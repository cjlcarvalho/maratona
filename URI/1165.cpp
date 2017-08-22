#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i<=n; i++){
        if(i == n)
            return true;
        else if(n % i == 0)
            return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(isPrime(x))
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
    return 0;
}
