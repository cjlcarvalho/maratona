#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, j, existe;
	string palavra, bracelete;
	vector<int> resp;
	cin >> n;
	while(n){
		cin >> palavra;
		cin >> bracelete;
		if(palavra.size() > 1000 || bracelete.size() > 100000)
			return 0;
		existe = 0;
		for(int i = 0; i<bracelete.size(); i++){
			if(bracelete[i] < 97)
				return 0;
			if(bracelete[i] == palavra[0]){
				j = i;
				for(int k = 0; k<palavra.size(); k++){
					if(j == bracelete.size())
						j = 0;
					if(bracelete[j] == palavra[k]){
						j++;
						if(k == palavra.size() - 1){
							existe = 1;
							break;
						}
					}
					else
						break;
				}
				j = i;
				for(int k = 0; k<palavra.size(); k++){
					if(j < 0)
						j = bracelete.size() - 1;
					if(bracelete[j] == palavra[k]){
						j--;
						if(k == palavra.size() - 1){
							existe = 1;
							break;
						}
					}
					else
						break;
				}
			}
			if(existe)
				break;
		}
		if(existe)
			resp.push_back(1);
		else
			resp.push_back(0);
		n--;
	}
	for(auto it = resp.begin(); it != resp.end(); ++it){
		if(*it)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
	return 0;
}