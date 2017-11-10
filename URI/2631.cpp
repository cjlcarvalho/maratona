#include <bits/stdc++.h>

// deu TLE :(

using namespace std;

bool connected(list<int>* arestas, int a, int b, int n){
    bool visited[n];
    int current;
    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        current = q.front();
        q.pop();
        visited[current] = true;
        for(int i : arestas[current]){
            if(i == b)
                return true;
            else if(!visited[i])
                q.push(i);
        }
    }
    return false;
}

int main(){
    int n, m, q, a, b;
    while(scanf(" %d %d %d", &n, &m, &q) != EOF){
        list<int>* arestas = new list<int>[n];
        for(int i = 0; i<m; i++){
            scanf(" %d %d", &a, &b);
            arestas[a-1].push_back(b-1);
            arestas[b-1].push_back(a-1);
        }
        for(int i = 0; i<q; i++){
            scanf(" %d %d", &a, &b);
            if(connected(arestas, a - 1, b - 1, n))
                printf("S\n");
            else
                printf("N\n");
        }
        printf("\n");
    }
    return 0;
}
