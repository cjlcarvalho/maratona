#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t x, y;
    while(cin >> x >> y){
        int64_t dif = x - y;
        dif = (dif < 0) ? -dif : dif;
        cout << dif << endl;
    }
    return 0;
}
