#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, p, j;
	string a;
	cin >> n;
	vector<vector<int>> v;
	while(n){
		cin >> p;
		vector<int> x;
		for(int i = 0; i<=p; i++){
			j = 0;
			getline(cin, a);
			for(int k = 0; k<a.size(); k++){
				if(a[k] != ' '){
					while(a[k] != ' ' && a[k] != '\n' && k < a.size()) k++;
					j++;
				}
			}
			if(j == 1) x.push_back(i);
		}
		v.push_back(x);
		n--;
	}
	for(auto i = v.begin(); i != v.end(); ++i){
		for(auto j = (*i).begin(); j != (*i).end(); ++j)
			cout << *j << " ";
		cout << endl;
	}
	return 0;
}