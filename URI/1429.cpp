#include <bits/stdc++.h>

typedef int64_t in;

using namespace std;

in fat(in n){
    if(n == 1) return 1;
    else return n * fat(n-1);
}

int main(){
    in n;
    while(cin >> n){
        if(!n) break;
        in i = 1, total = 0;
        while(n){
            total += ((n % 10) * fat(i));
            i++;
            n /= 10;
        }
        cout << total << endl;
    }
    return 0;
}
