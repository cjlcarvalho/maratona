#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, total = 0, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a > b) total += b;
    }
    cout << total << endl;
    return 0;
}
