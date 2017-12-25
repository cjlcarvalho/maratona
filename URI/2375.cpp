#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(n <= a && n <= b && n <= c)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
