#include <bits/stdc++.h>

using namespace std;

int64_t fat(int64_t n){
    if(n < 2)
        return 1;
    else
        return n * fat(n-1);
}

int main(){
    int64_t x, y;
    while(cin >> x >> y){
        cout << fat(x) + fat(y) << endl;
    }
    return 0;
}
