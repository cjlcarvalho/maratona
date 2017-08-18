#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> v;
    while(cin >> n){
        int a[n];
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i = 0; i<=n; i++){
            if(i == n){
                v.push_back(-31);
                break;
            }
            int soma = 0;
            for(int j = 0; j<i; j++)
                soma += a[j];
            if(soma == a[i]){
                v.push_back(soma);
                break;
            }
        }
    }
    int cont = 1;
    for(vector<int>::iterator i = v.begin(); i != v.end(); ++i){
        cout << "Instancia " << cont << endl;
        if(*i == -31)
            cout << "nao achei" << endl;
        else
            cout << *i << endl;
        cout << "\n";
        cont++;
    }
    return 0;
}
