#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a, b, total = 0;
    bool flag = false;
    cin >> n >> m;
    while(n--){
        cin >> a >> b;
        total += (b - a);
        if(total > m) flag = true;
    }
    if(flag) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}
