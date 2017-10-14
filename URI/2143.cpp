#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    while(cin >> n, n){
        while(n--){
            cin >> x;
            if(x % 2)
                cout << x * 2 - 1 << endl;
            else
                cout << x * 2 - 2 << endl;
        }
    }
    return 0;
}
