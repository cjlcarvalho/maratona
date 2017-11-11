#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    double valor;
    string s;
    cin >> n;
    while(n--){
        cin >> x;
        map<string, double> m;
        for(int i = 0; i<x; i++){
            cin.ignore();
            cin >> s >> valor;
            m[s] = valor;
        }
        double total = 0;
        cin >> x;
        for(int i = 0; i<x; i++){
            cin.ignore();
            cin >> s >> valor;
            total += m[s] * valor;
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << total << endl;
    }
    return 0;
}
