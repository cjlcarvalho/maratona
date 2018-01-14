#include <bits/stdc++.h>

using namespace std;

bool quadPerfeito(int n){
    double raiz = sqrt(n);
    while(raiz >= 1)
        raiz--;
    return raiz == 0.0;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        int cont = 1;
        cin >> n;
        int v[n];
        memset(v, 0, n * sizeof(int));
        v[0] = 1;
        for(int i = 2, j = 0; ; ){
            if(j == n)
                break;
            if(!v[j]){
                v[j] = i;
                i++;
                cont++;
                j = 0;
            }
            else if((quadPerfeito(v[j] + i))){
                v[j] = i;
                i++;
                cont++;
                j = 0;
            }
            else
                j++;
        }
        cout << cont << endl;
    }
    return 0;
}
