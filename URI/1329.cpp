#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(!n) break;
        int joao, maria, a;
        joao = maria = 0;
        while(n--){
            cin >> a;
            if(a) joao++;
            else maria++;
        }
        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
    }
    return 0;
}
