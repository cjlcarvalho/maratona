#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    bool pecas[n];
    memset(pecas, false, sizeof pecas);
    for(int i = 0; i<n-1; i++){
        cin >> a;
        pecas[a-1] = true;
    }
    for(int i = 0; i<n; i++){
        if(!pecas[i]){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
