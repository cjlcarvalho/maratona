#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    ull n, m, a, b;
    map<ull, ull> p, v;
    cin >> n >> m;
    while(n--){
        cin >> a >> b;
        p[a] = b;
    }
    while(m--){
        cin >> a >> b;
        if(!v.count(a))
            v[a] = b;
        else if(v[a] < b)
            v[a] = b;
    }
    for(auto i = v.begin(); i != v.end(); i++){
        if(p[i->first] < i->second || !p.count(i->first))
            cout << i->first << " " << i->second << endl;
    }
    return 0;
}
