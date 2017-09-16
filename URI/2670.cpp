#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c)
        cout << b * 2 + c * 4 << endl; 
    else if(b >= a && b >= c)
        cout << a * 2 + c * 2 << endl;
    else
        cout << a * 4 + b * 2 << endl;
    return 0;
}
