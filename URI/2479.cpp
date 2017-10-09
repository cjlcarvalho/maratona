#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, mais = 0, menos = 0;
    char sinal;
    cin >> n;
    string nomes[n];
    for(int i = 0; i<n; i++){
        cin >> sinal >> nomes[i];
        if(sinal == '+')
            mais++;
        else
            menos++;
    }
    sort(nomes, nomes + n);
    for(string nome : nomes)
        cout << nome << endl;
    cout << "Se comportaram: " << mais << " | Nao se comportaram: " << menos << endl;
    return 0;
}
