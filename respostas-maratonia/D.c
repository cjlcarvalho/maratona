#include <stdio.h>
#include <math.h>

typedef long long ll;

int main(){
    ll a;
    while(scanf(" %lld", &a))
        printf("%lld\n", (ll)(log(a) / log(2)));
    return 0;
}
