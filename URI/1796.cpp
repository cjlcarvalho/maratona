#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, a, s, n;
    s = n = 0;
    cin >> x;
    while(x--){
        cin >> a;
        if(a == 0) s++;
        else n++; 
    }
    if(s > n) cout << "Y";
    else cout << "N";
    cout << endl;
    return 0;
}
