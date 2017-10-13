#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, ra, rb;
    while(cin >> n, n){
        ra = rb = 0;
        while(n--){
            cin >> a >> b;
            if(a > b)
                ra++;
            else if(b > a)
                rb++;
        }
        cout << ra << " " << rb << endl;
    }
    return 0;
}
