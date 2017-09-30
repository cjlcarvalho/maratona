#include <bits/stdc++.h>

using namespace std;

bool solve(string str){
	int d1, d2;
	d1 = d2 = 0;
    
	for(unsigned int i = 0, j = 1; i < str.size() - 2; i++){
		if(str[i] != '.' && str[i] != '-'){
			d1 += ((str[i] - 48) * j);
			j++;
		}
	}
	int r1 = d1 % 11;
    if(r1 == 10 && (str[12] - 48)){
        return false;
    }
	else if((r1 != 10) && ((str[12] - 48) != r1)){
        return false;
    }
	for(unsigned int i = 0, j = 9; i < str.size() - 2; i++){
		if(str[i] != '.' && str[i] != '-'){
			d2 += (str[i] - 48) * j;
			j--;
		}
	}
	int r2 = d2 % 11;
    if(r2 == 10 && (str[13] - 48))
        return false;
	else if(r2 != 10 && (str[13] - 48) != r2)
		return false;
	return true;
}

int main(){
	string str;
	while(getline(cin, str)){
		if(solve(str)) cout << "CPF valido" << endl;
		else cout << "CPF invalido" << endl;
	}
	return 0;
}
