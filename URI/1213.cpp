#include <bits/stdc++.h>

using namespace std;

int only_ones(int64_t n){
    int cont = 0;
    while(n > 0){
        if(n % 10 == 1)
            cont++;
        else
            return 0;
        n /= 10;
    }
    return cont;
}

int main(){
    int n;
    while(cin >> n){
        for(int i = 1; ; i++){
            int64_t r = n * i;
            int cont = only_ones(r);
            if(cont){
                cout << cont << endl;
                break;
            }
        }
    }
    return 0;
}
