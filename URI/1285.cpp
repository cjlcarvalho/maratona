#include <bits/stdc++.h>

using namespace std;

bool repeated(int n){
	int t;
	while(n){
		t = n / 10;
		while(t){
			if(n%10 == t%10) 
				return true;
			t /= 10;
		}
		n /= 10;
	}
	return false;
}

int main(){
	int n, m, cont;
	while(cin >> n >> m){
		cont = 0;
		for(int i = n; i<=m; i++)
			if(!repeated(i)) 
				cont++;
		cout << cont << endl;
	}
	return 0;
}
