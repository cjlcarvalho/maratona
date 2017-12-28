#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a > b) cout << ">";
        else if(a < b) cout << "<";
        else cout << "=";
        cout << endl;
    }
    return 0;
}
