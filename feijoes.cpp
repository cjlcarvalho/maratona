#include <iostream>
#include <vector>

typedef unsigned long long int ll;

using namespace std;

ll quant_dig(ll p, int k){
	int occ = 0;
	ll x = p;
	int vet[10] = {};
	while(x){
		if(!vet[x%10]){
			vet[x%10] = 1;
			occ++;
			if(occ > k)
				break;
		}
		x /= 10;
	}
	return (occ == k) ? p : quant_dig(p + 1, k);
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
