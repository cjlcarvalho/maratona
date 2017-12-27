#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    ull n, m, a, cont = 0;
    cin >> n >> m;
    while(m--){
        cin >> a;
        if(a * n >= 40000000LL)
            cont++;
    }
    cout << cont << endl;
    return 0;
}
