#include <bits/stdc++.h>

using namespace std;

int64_t f91(int64_t n){
    if(n <= 100) return f91(f91(n+11));
    else return n - 10;
}

int main(){
    int64_t n;
    while(cin >> n, n)
        cout << "f91(" << n << ") = " << f91(n) << endl;
    return 0;
}
