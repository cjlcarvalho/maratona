#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double x;
    cin >> n;
    while(n--){
        int cont = 0;
        cin >> x;
        while(x > 1){
            x /= 2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }
    return 0;
}
