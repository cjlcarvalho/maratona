#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a;
    while(cin >> n >> m){
        bool volunt[n];
        memset(volunt, false, sizeof(volunt));
        for(int i = 0; i<m; i++){
            cin >> a;
            volunt[a - 1] = true;
        }
        bool exist = false;
        for(int i = 0; i<n; i++){
            if(!volunt[i]){
                cout << i + 1 << " ";
                exist = true;
            }
        }
        if(!exist) cout << "*";
        cout << endl;
    }
    return 0;
}
