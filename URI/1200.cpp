#include <bits/stdc++.h>

using namespace std;

int total = 0;

struct No {
    char valor;
    No *esq, *dir;
    
    No(char v) : valor(v){}

};

No* insert(No* root, char valor){
    if(!root){
        No* novo = new No(valor);
        novo->esq = novo->dir = NULL;
        return novo;
    }
    else if(valor < root->valor)
        root->esq = insert(root->esq, valor);
    else if(valor > root->valor)
        root->dir = insert(root->dir, valor);
    return root;
}

bool search(No* root, char valor){
    if(!root)
        return false;
    else if(root->valor == valor)
        return true;
    else if(root->valor > valor)
        return search(root->esq, valor);
    else if(root->valor < valor)
        return search(root->dir, valor);
    return false; 
}

void infixa(No* root, int* c){
    if(root){
        infixa(root->esq, c);
        cout << root->valor;
        if(*c != total - 1) cout << " ";
        *c += 1;
        infixa(root->dir, c);
    }
}

void prefixa(No* root, int* c){
    if(root){
        cout << root->valor;
        if(*c != total - 1) cout << " ";
        *c += 1;
        prefixa(root->esq, c);
        prefixa(root->dir, c);
    }
}

void posfixa(No* root, int* c){
    if(root){
        posfixa(root->esq, c);
        posfixa(root->dir, c);
        cout << root->valor;
        if(*c != total - 1) cout << " ";
        *c += 1;
    }
}

int main(){
    string op;
    char a;
    No* root = NULL;
    while(cin >> op){
        if(op == "I"){
            cin >> a;
            root = insert(root, a);
            total++;
        }
        else if(op == "P"){
            cin >> a;
            if(!search(root, a)) cout << a << " nao existe" << endl;
            else cout << a << " existe" << endl;
        }
        else if(op == "INFIXA") {
            int c = 0;
            infixa(root, &c);
            cout << endl;
        }
        else if(op == "PREFIXA") {
            int c = 0;
            prefixa(root, &c);
            cout << endl;
        }
        else if(op == "POSFIXA") {
            int c = 0;
            posfixa(root, &c);
            cout << endl;
        }
    }
    
}
