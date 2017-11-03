#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, j, x = 1;
    bool c;
    while(cin >> n >> q){
        if(!n && !q) break;
        int N[n], Q[q];
        for(int i = 0; i<n; i++) cin >> N[i];
        for(int i = 0; i<q; i++) cin >> Q[i];
        sort(N, N + n);
        cout << "CASE# " << x << ":" << endl;
        x++;
        for(int i = 0; i < q; i++){
            c = false;
            for(j = 0; j < n; j++){
                if(Q[i] == N[j]){
                    c = true;
                    break;
                }
            }
            if(c)
                cout << Q[i] << " found at " << j + 1 << endl;
            else
                cout << Q[i] << " not found" << endl;
        }
    }
    return 0;
}
