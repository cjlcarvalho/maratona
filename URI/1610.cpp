#include <bits/stdc++.h>

using namespace std;

class Graph {
    int v;
    vector<int>* edges;
    
    public:
        Graph(int ver) : v(ver), edges(new vector<int>[ver]){}
        
        void add(int m, int n){
            this->edges[m].push_back(n);
        }
        
        bool isCyclic(){
        
            bool *visited = new bool[this->v];
            bool *pilhaRecursao = new bool[this->v];
            
            for(int i = 0; i < this->v; i++){
                visited[i] = false;
                pilhaRecursao[i] = false;
            }
            
            for(int i = 0; i<this->v; i++){
                if(this->isCyclicUtil(i, visited, pilhaRecursao))
                    return true;
            }
            return false;
        }
        
        bool isCyclicUtil(int j, bool* visited, bool* pilhaRecursao){
            if(!visited[j]){
                visited[j] = true;
                pilhaRecursao[j] = true;
                
                for(int i : edges[j]){
                    // caso não tenha sido visitado, verifico se existe loop para ele mesmo em suas adjacencias
                    if(!visited[i] && isCyclicUtil(i, visited, pilhaRecursao))
                        return true;
                    else if(pilhaRecursao[i]) // caso contrário, verifico se ele já se encontra na pilha
                        return true;
                }
            }
            pilhaRecursao[j] = false;
            return false;
        }
};

int main(){
    int n;
    cin >> n;
    while(n--){
        int v, a, m, n;
        cin >> v >> a;
        Graph* graph = new Graph(v);
        while(a--){
            cin >> m >> n;
            graph->add(m - 1, n - 1);
        }
        if(graph->isCyclic())
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
    }
    return 0;
}
