#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    while(cin >> m){
        if(m >= 0){
            if(m < 90) cout << "Bom Dia!!" << endl;
            else if(m < 180) cout << "Boa Tarde!!" << endl;
            else if(m < 270) cout << "Boa Noite!!" << endl;
            else if(m <= 360) cout << "De Madrugada!!" << endl;
        }
    }
    return 0;
}
