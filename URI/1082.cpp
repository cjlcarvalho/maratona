#include <bits/stdc++.h>

using namespace std;

struct Vertex {
    char val;
    vector<Vertex*> adj;
    
    Vertex(char val){
        this->val = val;
    };
    
    void addAdj(char val){
        this->adj.push_back(new Vertex(val));
    };
    
    bool isAdj(char val){
        for(Vertex* child : this->adj)
            if(child->val == val)
                return true;
        return false;
    };
    
    bool isContained(vector<Vertex*> v, char father){
        for(Vertex* f : v){
            if(f->val == father && f->isAdj(this->val))
                return true;
        }
        return false;
    };
};

void add(vector<Vertex*> vtx, char first, char second){
    for(Vertex* v : vtx){
        if(v->val == first && !v->isAdj(second) && !v->isContained(vtx, second)){
            v->addAdj(second);
            return;
        }
        else if(v->val != first && v->isAdj(second) && !v->isAdj(first)){
            v->addAdj(first);
            return;
        }
        else if(v->val != second && v->isAdj(first) && !v->isAdj(second)){
            v->addAdj(second);
            return;
        }
        else if(v->val == second && !v->isAdj(first) && !v->isContained(vtx, first)){
            v->addAdj(first);
            return;
        }
    }
}

bool compare(char a, char b){
    return a < b;
}

int main(){
    int n, v, e;
    char a, b;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> v >> e;
        vector<Vertex*> vtx;
        for(char c = 'a', i = 0; i<v; i++, c++)
            vtx.push_back(new Vertex(c));
        while(e--){
            cin >> a >> b;
            add(vtx, a, b);
        }
        cout << "Case #" << i << ":" << endl;
        int cont = 0;
        for(Vertex* vt : vtx){
            bool adj = false;
            for(Vertex* vt2 : vtx)
                if(vt2->isAdj(vt->val)) adj = true;
            if(!adj){
                cont++;
                string result;
                result.push_back(vt->val);
                for(Vertex* c : vt->adj) 
                    result.push_back(c->val);
                sort(result.begin(), result.end(), compare);
                for(char c : result)
                    cout << c << ",";
                cout << endl;
            }
        }
        cout << cont << " connected components" << endl << endl;
    }
    return 0;
}
