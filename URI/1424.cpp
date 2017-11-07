#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a, b, c;
    while(cin >> n >> m){
        map<int, vector<int>> mp;
        for(int i = 0; i<n; i++){
            cin >> c;
            if(!mp.count(c)){
                vector<int> v;
                v.push_back(i+1);
                mp[c] = v;
            }
            else mp[c].push_back(i+1);
        }
        for(int i = 0; i<m; i++){
            cin >> a >> b;
            if(int(mp[b].size()) < a) cout << 0 << endl;
            else cout << mp[b][a-1] << endl;
        }
    }
    return 0;
}
