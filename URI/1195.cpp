#include <bits/stdc++.h>

using namespace std;

struct no {
    int value;
    struct no* E;
    struct no* D;
};

typedef struct no No;

No* mountNo(No* root, int value){
    if(root){
        if(value < root->value)
            root->E = mountNo(root->E, value);
        else if(value > root->value)
            root->D = mountNo(root->D, value);
        return root;
    }
    else {
        No* novo = new No;
        novo->value = value;
        novo->E = novo->D = NULL;
        return novo;
    }
}

void pre(No* root, int* n, int x){
    if(root){
        cout << root->value;
        *n += 1;
        if(*n == x) cout << endl;
        else cout << " ";
        pre(root->E, n, x);
        pre(root->D, n, x);
    }
}

void in(No* root, int* n, int x){
    if(root){
        in(root->E, n, x);
        cout << root->value;
        *n += 1;
        if(*n == x) cout << endl;
        else cout << " ";
        in(root->D, n, x);
    }
}

void post(No* root, int* n, int x){
    if(root){
        post(root->E, n, x);
        post(root->D, n, x);
        cout << root->value;
        *n += 1;
        if(*n == x) cout << endl;
        else cout << " ";
    }
}

int main(){
    int n, m, v, x;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> m;
        No* root = NULL;
        for(int j = 0; j<m; j++){
            cin >> v;
            root = mountNo(root, v);
        }
        cout << "Case " << i << ":" << endl << "Pre.: ";
        x = 0;
        pre(root, &x, m);
        cout << "In..: ";
        x = 0;
        in(root, &x, m);
        cout << "Post: ";
        x = 0;
        post(root, &x, m);
        cout << endl;
    }
    return 0;
}
