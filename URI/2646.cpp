#include <bits/stdc++.h>

using namespace std;

bool connected(map<char, vector<char> > m, char a, char b){
    if(a == b) return true;
    for(char e : m[a])
        if(connected(m, e, b))
            return true;
    return false;
}

int main(){
    int n, m;
    char a, b;
    string c, d;
    while(scanf(" %d %d", &n, &m) != EOF){
        map<char, vector<char> > mp;
        for(int i = 0; i<n; i++){
            scanf(" %c %c", &a, &b);
            if(!mp.count(a)){
                vector<char> v;
                mp[a] = v;
            }
            mp[a].push_back(b);
        }
        cin.ignore();
        for(int i = 0; i<m; i++){
            cin >> c >> d;
            if(c.size() != d.size()) printf("no\n");
            else {
                bool connect = true;
                for(int j = 0; j<int(c.size()) && connect; j++)
                    if(c[j] != d[j])
                        if(!connected(mp, c[j], d[j])) connect = false;
                if(connect) printf("yes\n");
                else printf("no\n");
            }
        }
    }
    return 0;
}
