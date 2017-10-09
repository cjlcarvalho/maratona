#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    while(cin >> n){
        if(!n) break;
        long maior = n;
        while(n > 1){
            if(n % 2)
                n = 3*n + 1;
            else
                n = n/2;
            if(n > maior)
                maior = n;
        }
        cout << maior << endl;
    }
    return 0;
}
