#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull sum(ull n){
    ull result = 0;
    while(n){
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main(){
    ull n;
    while(cin >> n, n){
        while(n >= 10)
            n = sum(n);
        cout << n << endl;
    }
    return 0;
}
