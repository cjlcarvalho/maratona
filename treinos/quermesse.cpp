#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int j = 1;
    while(cin >> n){
        if(n == 0)
            break;
        int v[n];
        int ganhador = 0;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            if(v[i] == (i + 1) && !ganhador)
                ganhador = v[i];
        }
        cout << "Teste " << j << endl;
        cout << ganhador << endl;
        cout << endl;
        j++;
    }
    return 0;
}
