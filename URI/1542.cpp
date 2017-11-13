#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;
    while(cin >> a){
        if(!a) break;
        cin >> b >> c;
        int x = int(floor((b * a * c)/(c - a)));
        cout << x;
        if(x == 1) cout << " pagina" << endl;
        else cout << " paginas" << endl;
    }
    return 0;
}
