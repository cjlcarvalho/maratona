#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>

typedef unsigned long long ull;

int table[100000];

ull max(ull a, ull b) {
    return a > b ? a : b;
}

void build_table() {
    ull base = 1;
    int idx;
    table[0] = 1;
    for (idx = 1; idx < 100000; idx++)
        table[idx] = base *= 10;
}

// TODO: realizar operação em vetor
ull solve(ull x, ull i, ull d){
    if(x == 0 || i > d)
        return 0;
    else
        return max(x % 10 * table[i - 1] + solve(x / 10, i+1, d), solve(x / 10, i, d));
}

int main(){
    build_table();
    ull n, d, x, i;
    while(scanf(" %llu %llu", &n, &d) != EOF && n && d) {
        scanf(" %llu", &x);
        printf("%llu\n", solve(x, 1LL, n - d));
    }
    return 0;
}
