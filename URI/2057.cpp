#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int soma = ((a + b) % 24) + c;
    if(soma < 0) soma = 24 + soma;
    else if(soma > 24) soma %= 24;
    cout << soma << endl;
    return 0;
}
