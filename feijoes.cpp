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
	ll p;
	int n, k, i = 0;
	cin >> n;
	ll resp[n];
	while(i < n){
		cin >> p >> k;
		if(p < 1 || p > 1000000000000000000 || k < 1 || k > 10)
			return 0;
		resp[i] = quant_dig(p, k);
		i++;
	}
	for(int a = 0; a < n; a++)
		cout << "Caso " << a + 1 << ": " << resp[a] << endl;
	return 0;
}
