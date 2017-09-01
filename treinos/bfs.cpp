#include <bits/stdc++.h>

using namespace std;

void bfs(int** graph, int root, int size){
    int current;
    set<int> S;
    queue<int> Q;
    
    S.insert(root);
    Q.push(root);
    
    while(Q.size() > 0){
        current = Q.front();
        Q.pop();
        for(int i = 0; i<size; i++){
            if(graph[i][0] == current && S.find(graph[i][1]) == S.end()){
                S.insert(graph[i][1]);
                Q.push(graph[i][1]);
            }
        }
    }
    for(set<int>::iterator i = S.begin(); i != S.end(); i++)
        cout << *i;
    cout << endl;
}

int main(){
    int** graph = new int*[5];
    for(int i = 0; i<5; i++)
        graph[i] = new int[2];
        
    graph[0][0] = 0;
    graph[0][1] = 1;
    graph[1][0] = 0;
    graph[1][1] = 2;
    graph[2][0] = 1;
    graph[2][1] = 3;
    graph[3][0] = 1;
    graph[3][1] = 4;
    graph[4][0] = 2;
    graph[4][1] = 5;
    
    bfs(graph, 0, 5);
    
    return 0;
}
