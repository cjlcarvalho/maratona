#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef vector<ull> vu;

void primeFactor(ull n, ull m, vu& l){
    ull i;
    if(n % 2 == 0)
        i = 2;
    else{
        i = (m == 2) ? int(sqrt(n)) : int(cbrt(n));
        if(i%2 == 0) i--;
        for(ull j = 3; j<=i; j += 2){
            if(n % j == 0){
                i = j;
                break;
            }
        }
    }
    l.push_back(i);
    if(m == 2)
        l.push_back(n / i);
    else
        primeFactor(n/i, 2, l);
}

int main(){
    ull n;
    while(scanf(" %llu", &n), n){
        vu l;
        primeFactor(n, 3, l);
        sort(l.begin(), l.end());
        printf("%llu = %llu x %llu x %llu\n", n, l[0], l[1], l[2]);
    }
    return 0;
}
