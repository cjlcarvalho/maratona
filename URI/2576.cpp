#include <bits/stdc++.h>

using namespace std;

struct Graph {
    int V;
    vector<int>* E;
    vector<int>* parent;
    
    Graph(int v) : V(v){
        E = new vector<int>[v];
        parent = new vector<int>[v];
    }
    
    void add(int a, int b){
        E[a].push_back(b);
        parent[b].push_back(a);
    }
    
    int solve(int a, int b){
        queue<int> q;
        q.push(a);
        int current, result = 0;
        bool visited[V];
        while(!q.empty()){
            current = q.front();
            if(current == b) break;
            visited[current] = true;
            int total = 0;
            for(int e : E[current]){
                if(!visited[e]){
                    q.push(e);
                    total++;
                }
            }
            if(total != int(E[current].size()) || int(E[current].size()) == 0){
                total = 0;
                for(int e : parent[current]){
                    if(!visited[e]){
                        total++;
                        q.push(e);
                        visited[e] = true;
                    }
                }
                if(total > 0)
                    result++;
            }
        }
        return result;
    }
};

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    Graph grafo(a);
    for(int i = 0; i<b; i++){
        cin >> e >> f;
        grafo.add(e-1, f-1);
    }
    int bibi = grafo.solve(c-1, d-1);
    int bibika = grafo.solve(d-1, c-1);
    if(bibi < bibika)
        cout << "Bibi: " << bibi << endl;
    else if(bibika < bibi)
        cout << "Bibika: " << bibika << endl;
    else
        cout << "Bibibibika" << endl;
    return 0;
}
