#include <bits/stdc++.h>

using namespace std;

struct No {
    int valor;
    No *esq, *dir;
    
    No(int v) : valor(v){}
    
    void bfs(){
        No* current;
        queue<No*> q;
        q.push(this);
        while(!q.empty()){
            current = q.front();
            cout << current->valor;
            q.pop();
            if(current->esq)
                q.push(current->esq);
            if(current->dir)
                q.push(current->dir);
            if(!q.empty()) cout << " ";
            else cout << endl;
        }
    }
};

No* insert(No* root, int valor){
    if(root == NULL){
        No* novo = new No(valor);
        novo->esq = novo->dir = NULL;
        return novo;
    }
    else if(root->valor > valor)
        root->esq = insert(root->esq, valor);
    else if(root->valor < valor)
        root->dir = insert(root->dir, valor);
    return root;
} 

int main(){
    int n, m, q, t = 1;
    cin >> n;
    while(n--){
        No* root = NULL;
        cin >> m;
        for(int i = 0; i<m; i++){
            cin >> q;
            root = insert(root, q);
        }
        if(root){
            cout << "Case " << t << ":" << endl;
            root->bfs();
            t++;
            cout << endl;
        }
    }
    return 0;
}
