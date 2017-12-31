#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    vector<int> v;
    cin >> n;
    while(n--){
        cin >> m;
        v.push_back(m);
    }
    cin >> n;
    while(n--){
        cin >> m;
        vector<int>::iterator it = find(v.begin(), v.end(), m);
        if(it != v.end())
            v.erase(it);
    }
    for(unsigned int i = 0; i<v.size(); i++){
        cout << v[i];
        if(i == v.size() - 1) cout << endl;
        else cout << " ";
    }
    return 0;
}
