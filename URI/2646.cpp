#include <bits/stdc++.h>

using namespace std;

struct Graph {
    map<char, vector<char>> E;
    
    Graph(){
        for(char i = 'a'; i <= 'z'; i++){
            vector<char> v;
            E[i] = v;
        }
    }
    
    void add(char a, char b){
        E[a].push_back(b);
    }
    
    bool connected(char a, char b){
        char current;
        queue<char> q;
        q.push(a);
        while(!q.empty()){
            current = q.front();
            q.pop();
            if(current == b) return true;
            for(char i : E[current])
                q.push(i);
        }
        return false;
    }

};

int main(){
    int n, m;
    char a, b;
    string c, d;
    while(cin >> n >> m){
        getline(cin, c);
        Graph grafo;
        for(int i = 0; i<n; i++){
            cin >> a >> b;
            grafo.add(a, b);
        }
        for(int i = 0; i<m; i++){
            cin >> c >> d;
            if(c.size() != d.size()) cout << "no" << endl;
            else {
                bool exist = true;
                for(int j = 0; j<int(c.size()); j++){
                    if(!grafo.connected(c[j], d[j])){
                        exist = false;
                        break;
                    }
                }
                if(exist) cout << "yes" << endl;
                else cout << "no" << endl;
            }
        }
    }
    return 0;
}
