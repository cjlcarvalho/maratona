#include <bits/stdc++.h>

using namespace std;

struct No {
    char val;
    vector<No*> adj;
    
    bool isAdj(char c){
        for(No* child : adj)
            if(child->val == c)
                return true;
        return false;
    };
};

bool contains(vector<No*> nos, char c){
    for(No* n : nos)
        if(n->val == c) 
            return true;
    return false;
}

void addNo(vector<No*>& nos, char val){
    for(No* n : nos){
        if(n->val == val)
            return;
    }
    No* novo = new No;
    novo->val = val;
    nos.push_back(novo);
}

void addAdj(vector<No*>& nos, char father, char child){
    
}

int main(){
    int n, v, e;
    char a, b;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> v >> e;
        vector<No*> nos;
        for(char c = 'a', i = 0; i<v; i++, c++)
            addNo(nos, c);
        for(int i = 0; i<e; i++){
            cin >> a >> b;
            addAdj(nos, a, b);            
        }
        cout << "Case #" << i << ":" << endl;
        int cont = 0;
        for(No* n : nos){
            if(!isAdj(nos, n->val)){
                cont++;
                cout << n->val << ",";
                for(No* c : n->adj)
                    cout << c->val << ",";
                cout << endl;
            }
        }
        cout << cont << " connected components" << endl << endl;
    }
    return 0;
}
