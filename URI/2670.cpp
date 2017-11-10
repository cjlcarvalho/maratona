#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int primeiro, segundo, terceiro;
    primeiro = b * 2 + c * 4;
    segundo = a * 2 + c * 2;
    terceiro = a * 4 + b * 2;
    cout << min(min(primeiro, segundo), terceiro) << endl;
    return 0;
}
