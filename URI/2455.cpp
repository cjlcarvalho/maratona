#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    if(a * b == c * d)
        cout << 0 << endl;
    else if(c * d > a * b)
        cout << 1 << endl;
    else
        cout << -1 << endl;
    
    return 0;
}
