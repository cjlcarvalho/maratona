#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double total = 0;
    double soma = 0;
    for(int i = 1; i<=n; i++){
        double x;
        string s;
        cin >> x;
        cin.ignore();
        total += x;
        double cont = 1;
        getline(cin, s);
        for(int i = 0; i<s.size(); i++)
            if(s[i] == ' ')
                cont++;
        cout << fixed << setprecision(0);
        cout << "day " << i << ": " << cont << " kg" << endl;
        soma += cont;
    }
    cout << fixed << setprecision(2);
    cout << soma / n << " kg by day" << endl;
    cout << "R$ " << total / n << " by day" << endl;
    return 0;
}
