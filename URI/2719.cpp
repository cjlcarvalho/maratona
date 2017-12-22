#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t, n, m, total, a;
    cin >> t;
    while(t--){
        cin >> n >> m;
        total = 0;
        for(long long i = 0; i<n; i++){
            cin >> a;
            total += a;
        }
        cout << (total / m) + 1 << endl; 
    }
    return 0;
}
