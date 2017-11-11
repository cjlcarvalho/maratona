#include <bits/stdc++.h>
#define INF 10000000

using namespace std;

struct Graph {
    int V;
    vector< pair<int, int> > *E;
    
    Graph(int v) : V(v){
        E = new vector< pair<int, int> >[v];
    }
    
    void add(int a, int b, int c){
        E[a].push_back({b, c});
    }
    
    void solve(){
        vector<int> c = cut();
        int total = weight(c);
        cout << total << " " << c.size() << endl;
        if(c.size())
            for(int i = 0; i<int(c.size()); i++){
                cout << c[i];
                if(i == int(c.size()) - 1) cout << endl;
                else cout << " ";
            }
    }
    
    int weight(vector<int> c){
        int total = 0;
        queue<int> q;
        q.push(0);
        int current;
        while(!q.empty()){
            current = q.front();
            q.pop();
            for(pair<int, int> p : E[current]){
                if(find(c.begin(), c.end(), p.first) != c.end()){
                    total += p.second;
                    q.push(p.first);
                }
            }
        }
        return total;
    }
    
    vector<int> cut(){
        vector<int> result;
        DFSutil(result, 0);
        return result;
    }
    
    void DFSutil(vector<int>& result, int i){
        vector<int> negative;
        for(pair<int, int> p : E[i]){
            if(recursion(p.first) < 0)
                result.push_back(p.first);
            DFSutil(result, p.first);    
        }
    }
    
    int recursion(int i){
        if(E[i].empty()) return 0;
        int min = INF;
        for(pair<int, int> p : E[i]){
            int temp = p.second + recursion(p.first);
            if(temp < min)
                min = temp;
        }
        return min;
    }

};

int main(){
    int v, a, b, c, d;
    cin >> v;
    Graph grafo(v);
    for(int i = 0; i<v-1; i++){
        cin >> a >> b >> c >> d;
        grafo.add(b, c, d);
    }
    grafo.solve();
    return 0;
}
