#include <bits/stdc++.h>

using namespace std;

typedef struct no No;

struct no {
	map<char, No*> tr;
	bool end = false;
};

No* makeNo(){
	return new No();
}

No* R = makeNo();

void insere(string t){
	No* aux = R;
	for(char c : t){
		if(aux->tr.count(c))
			aux = aux->tr[c];
		else {
			aux->tr[c] = makeNo();
			aux = aux->tr[c];
		}
	}
	aux->end = true;
}

bool consulta(string t){
	No* aux = R;
	for(char c : t){
		if(aux->tr.count(c))
			aux = aux->tr[c];
		else
			return false;
	}
	return aux->end;
}

// checar se uma string t é prefixo de alguma string na trie
bool isPrefix(string t){
	No* aux = R;
	for(char c : t){
		if(aux->tr.count(c))
			aux = aux->tr[c];
		else 
			return false;
	}
	return true;
}

int main(){
	// inserir strings
	int n;
	cin >> n;
	string t;
	for(int i = 0; i<n; i++){
		cin >> t;
		insere(t);
	}
	// consultar strings
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> t;
		cout << consulta(t) << endl;
	}
	
	cin >> t;
	cout << isPrefix(t) << endl;
	
	return 0;
}
