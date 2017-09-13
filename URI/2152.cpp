#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        cout << a / 10 << a % 10 << ":" << b/10 << b%10;
        if(c)
            cout << " - A porta abriu!" << endl;
        else
            cout << " - A porta fechou!" << endl;
    }
    return 0;
}
