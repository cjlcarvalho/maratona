#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

typedef unsigned long long int ll;

using namespace std;

bool quant_dig(ll p, int k){
	vector<int> v;
	ll a = p;
	while(p > 0){
		v.push_back(p%10);
		p /= 10;
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	if(v.size()== k)
		return true;
	else
		return false;
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
		if(quant_dig(p, k))
			resp.push_back(p);
		else{
			i = p + 1;
			while(i < (p + pow(10, k))){
				if(quant_dig(i, k))
					break;
				i++;
			}
			resp.push_back(i);
		}
		n--;
	}
	int c = 1;
	for(auto it = resp.begin(); it != resp.end(); ++it){
		cout << "Caso " << c << ": " << *it << endl;
		c++;
	}
	return 0;
}