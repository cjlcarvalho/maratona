#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        double vet[m];
        for(int i = 0; i<m; i++) cin >> vet[i];
        double soma = 0;
        for(int i = 0; i<m; i++) soma += vet[i];
        soma /= m;
        double total = 0;
        for(int i = 0; i<m; i++) if(vet[i] > soma) total++;
        cout << fixed << setprecision(3);
        cout << (total / m) * 100 << "%" << endl;
    }
    return 0;
}
