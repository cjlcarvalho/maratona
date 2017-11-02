#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(){
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        int vet1[m], vet2[m];
        for(int i = 0; i<m; i++){
            cin >> vet1[i];
            vet2[i] = vet1[i];
        }
        sort(vet2, vet2 + m, compare);
        int cont = 0;
        for(int i = 0; i<m; i++){
            if(vet1[i] == vet2[i]) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
