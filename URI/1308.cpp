#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, a;
    cin >> n;
    while(n--){
        cin >> a;
        uint64_t c = - 2 * a;
        uint64_t x = (-1 + sqrt(1 - 4 * c))/2;
        cout << x << endl; 
    }
    return 0;
}
