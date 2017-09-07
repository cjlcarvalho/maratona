#include <bits/stdc++.h>

using namespace std;

// CUIDADO: O código a seguir é altamente orientado a gambiarra

struct No {
	char letra;
	struct No* esq;
	struct No* dir;
};

typedef struct No no;

// Tive que forçar a comparação com n - 1
// pois nos casos em que n - 1 era par, ele tava considerando a posição n
// e acabava colocando '\0' na árvore :(
no* makeTree(char* str, int ini, int fim, int n){
	no* root;
	if(ini == fim || ini == n - 1){
	    root = new no;
	    root->letra = str[ini];
	    root->esq = NULL;
	    root->dir = NULL;
	    return root;
	}
	else if(ini < fim){
	    int meio = (ini + fim + 1) / 2;
	    if(str[meio]){
		    root = new no;
		    root->letra = str[meio];
		    root->esq = makeTree(str, ini, meio - 1, n);
		    root->dir = makeTree(str, meio + 1, fim, n);
		    return root;
		}
	}
	return NULL;
}

void bfs(no* tree){
	vector<no*> V;
	queue<no*> Q;
	no* current;
	V.push_back(tree);
	Q.push(tree);
	while(!Q.empty()){
		current = Q.front();
		Q.pop();
		if(current->esq && current->esq->letra){
			V.push_back(current->esq);
			Q.push(current->esq);
		}
		if(current->dir && current->dir->letra){
			V.push_back(current->dir);
			Q.push(current->dir);
		}
	}
	for(auto i = V.begin(); i != V.end(); i++)
		cout << (*i)->letra;
	cout << endl;
}

int main(){
	char* str;
	int n;
	while(cin >> n){
		if(n == 0) break;
		str = new char[n];
		scanf(" %[^\n]s", str);
		no* tree = makeTree(str, 0, (n % 2) ? n : n - 1, n);
		bfs(tree);
		delete str;
	}
	return 0;
}
