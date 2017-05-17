#include <iostream>
#include <vector>

typedef unsigned long long int ll;

using namespace std;

ll quant_dig(ll p, int k){
	int occ;
	ll x;
	while(true){
		occ = 0;
		int vet[10] = {};
		x = p;
		while(x){
			if(!vet[x%10]){
				vet[x%10] = 1;
				occ++;
			}
			x /= 10;
		}
		if(occ == k) break;
		else p++;
	}
	return p;
}

int main(){
	ll p, i;
	int n, k;
	vector<ll> resp;
	cin >> n;
	while(n){
		cin >> p >> k;
		if(p < 1 || p > 1000000000000000000 || k < 1 || k > 10)
			return 0;
		resp.push_back(quant_dig(p, k));
		n--;
	}
	int c = 1;
	for(auto it = resp.begin(); it != resp.end(); ++it){
		cout << "Caso " << c << ": " << *it << endl;
		c++;
	}
	return 0;
}
