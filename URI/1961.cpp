#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, n;
    cin >> a >> n;
    int vet[n];
    for(int i = 0; i<n; i++) cin >> vet[i];
    bool win = true;
    for(int i = 1; i<n; i++)
        if(abs(vet[i] - vet[i-1]) > a) win = false;
    if(win) cout << "YOU WIN" << endl;
    else cout << "GAME OVER" << endl;
}
