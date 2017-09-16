#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome;
    double val, total = 0;
    int cont = 0;
    while(getline(cin, nome)){
        cin >> val;
        cin.ignore();
        total += val;
        cont++;
    }
    cout << fixed << setprecision(1);
    cout << total / cont << endl;
    return 0;
}
