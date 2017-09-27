#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, c, x, y;
    cin >> l >> c >> x >> y;
    int result = x * c + y;
    if(result % 2)
        cout << "Esquerda" << endl;
    else
        cout << "Direita" << endl;
    return 0;
}
