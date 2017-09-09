#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    int soma = j1 + j2;
    if(r && !a)
        cout << "Jogador 1 ganha!" << endl;
    else if(a && !r)
        cout << "Jogador 1 ganha!" << endl;
    else if(!r && !a && soma % 2 == 0 && p)
        cout << "Jogador 1 ganha!" << endl;
    else if(!r && !a && soma % 2 && !p)
        cout << "Jogador 1 ganha!" << endl;
    else
        cout << "Jogador 2 ganha!" << endl;
    return 0;
}
