#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, d, p;
    while(cin >> q){
        if(q == 0)
            break;
        cin >> d >> p;
        int y = floor((double) ((q*d)/(p-q))*p);
        cout << y << ((y == 1) ? " pagina" : " paginas") << endl;
    }
    return 0;
}
