#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, total;
    string x;
    cin >> n;
    while(n--){
        cin >> m;
        total = 0;
        for(int i = 0; i<m; i++){
            cin >> x;
            for(unsigned int j = 0; j<x.size(); j++)
                total += (x[j] - 'A') + i + j;
        }
        cout << total << endl;
        
    }
    return 0;
}
