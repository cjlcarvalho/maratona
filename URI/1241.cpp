#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;

	while(n--){
		string a, b;
		cin >> a >> b;
		bool equal = true;
		for(int i = a.size() - 1, j = b.size() - 1; j >= 0; i--, j--) 
            if(a[i] != b[j] || i < 0) 
                equal = false;
		if(equal)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}

	return 0;
}
