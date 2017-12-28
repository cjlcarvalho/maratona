#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, total = 0;
    cin >> n;
    while(n--){
        cin >> a;
        total += a - 1;
    }
    cout << total << endl;
    return 0;
}
