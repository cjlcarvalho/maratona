#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n, n){
        int a, b, x, y;
        cin >> x >> y;
        while(n--){
            cin >> a >> b;
            if(x == a || y == b) cout << "divisa" << endl;
            else if(a > x && b > y) cout << "NE" << endl;
            else if(a > x && b < y) cout << "SE" << endl;
            else if(a < x && b > y) cout << "NO" << endl;
            else if(a < x && b < y) cout << "SO" << endl;
        }
    }
    return 0;
}
